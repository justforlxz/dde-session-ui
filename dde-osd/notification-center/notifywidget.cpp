/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     listenerri <190771752ri@gmail.com>
 *
 * Maintainer: listenerri <190771752ri@gmail.com>
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

#include "notifywidget.h"
#include "appgroupmodel.h"
#include "appgroupdelegate.h"
#include "shortcutmanage.h"
#include "notification/persistence.h"

#include <QVBoxLayout>
#include <QScrollArea>
#include <QScrollBar>
#include <QScroller>
#include <QLabel>

NotifyWidget::NotifyWidget(QWidget *parent, Persistence *database)
    : QWidget(parent)
{
    initView(database);

    QVBoxLayout *mainVBLayout = new QVBoxLayout;
    m_noNotify = new QLabel(tr("No system notifications"));

    m_noNotify->setAlignment(Qt::AlignCenter);
    m_noNotify->setVisible(false);

    mainVBLayout->addWidget(m_mainList);
    mainVBLayout->addWidget(m_noNotify);
    mainVBLayout->setMargin(0);
    setLayout(mainVBLayout);

    m_noNotify->setVisible(m_groupModel->rowCount(QModelIndex()) == 0);
    m_mainList->setVisible(m_groupModel->rowCount(QModelIndex()) != 0);

    connect(m_groupModel, &AppGroupModel::dataChanged, this, [ = ] {
        m_noNotify->setVisible(m_groupModel->rowCount(QModelIndex()) == 0);
        m_mainList->setVisible(m_groupModel->rowCount(QModelIndex()) != 0);
    });

    connect(m_groupModel, &AppGroupModel::setScrollBarValue, this, &NotifyWidget::setScrollBar);
}

void NotifyWidget::initView(Persistence *database)
{
    m_groupModel = new AppGroupModel(this, database);
    m_groupDelegate = new AppGroupDelegate;
    m_mainList = new NotifyListView(this);

    ShortcutManage::instance()->setAppModel(m_groupModel);
    m_groupModel->setView(m_mainList);
    m_mainList->setModel(m_groupModel);
    m_mainList->setItemDelegate(m_groupDelegate);
    m_mainList->setAutoFillBackground(false);
    m_mainList->viewport()->setAutoFillBackground(false);
    m_mainList->setFrameStyle(QFrame::NoFrame);
    m_mainList->setMouseTracking(true);
    m_mainList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_mainList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_mainList->setVerticalScrollMode(QListView::ScrollPerPixel);
    m_mainList->setContentsMargins(0, 0, 0, 0);
    m_mainList->setUpdatesEnabled(true);
    m_mainList->setSelectionMode(QListView::NoSelection);
    m_mainList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    m_mainList->setFocusPolicy(Qt::NoFocus);

    QPalette pa = m_mainList->palette();
    pa.setColor(QPalette::Highlight, Qt::transparent);
    m_mainList->setPalette(pa);

    QScroller::grabGesture(m_mainList, QScroller::LeftMouseButtonGesture);
    QScroller *scroller = QScroller::scroller(m_mainList);
    QScrollerProperties sp;
    sp.setScrollMetric(QScrollerProperties::VerticalOvershootPolicy, QScrollerProperties::OvershootAlwaysOff);
    scroller->setScrollerProperties(sp);
}

void NotifyWidget::setScrollBar(int value)
{
    m_mainList->verticalScrollBar()->setValue(value);
}
