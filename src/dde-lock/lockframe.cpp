/*
 * Copyright (C) 2015 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "lockframe.h"
#include "session-widgets/lockcontent.h"
#include "session-widgets/sessionbasemodel.h"
#include "session-widgets/userinfo.h"
#include "timewidget.h"

#include <QApplication>
#include <QX11Info>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <X11/extensions/XTest.h>

LockFrame::LockFrame(SessionBaseModel * const model, QWidget* parent)
    : FullscreenBackground(parent)
    , m_model(model)
{
    qDebug() << "LockFrame geometry:" << geometry();

    m_content = new LockContent(model);
    m_content->setLeftBottomWidget(new TimeWidget);
    setContent(m_content);
    m_content->hide();
    connect(m_content, &LockContent::requestSwitchToUser, this, &LockFrame::requestSwitchToUser);
    connect(m_content, &LockContent::requestAuthUser, this, &LockFrame::requestAuthUser);
    connect(m_content, &LockContent::requestSetLayout, this, &LockFrame::requestSetLayout);
    connect(m_content, &LockContent::requestBackground, this, static_cast<void (LockFrame::*)(const QString &)>(&LockFrame::updateBackground));
    connect(model, &SessionBaseModel::showUserList, this, &LockFrame::showUserList);
    connect(model, &SessionBaseModel::authFinished, this, [=] (bool success) {
        if (success) {
            Q_EMIT requestEnableHotzone(true);
            hide();
        }
    });
}

void LockFrame::showUserList() {
    show();
    m_model->setCurrentModeState(SessionBaseModel::ModeStatus::UserMode);
}

void LockFrame::tryGrabKeyboard()
{
    int requestCode = XGrabKeyboard(QX11Info::display(), winId(), true, GrabModeAsync, GrabModeAsync, CurrentTime);

    if (requestCode != 0) {
        m_failures++;

        if (m_failures == 15) {
            qDebug() << "Trying grabkeyboard has exceeded the upper limit. dde-lock will quit.";
            qApp->quit();
        }

        QTimer::singleShot(100, this, &LockFrame::tryGrabKeyboard);
    }
}

void LockFrame::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
#ifdef QT_DEBUG
    case Qt::Key_Escape:    qApp->quit();       break;
#endif
    }
}

void LockFrame::showEvent(QShowEvent *event)
{
    emit requestEnableHotzone(false);

    m_model->setIsShow(true);

    return FullscreenBackground::showEvent(event);
}

void LockFrame::hideEvent(QHideEvent *event)
{
    emit requestEnableHotzone(true);

    m_model->setIsShow(false);

    return FullscreenBackground::hideEvent(event);
}

LockFrame::~LockFrame() {

}
