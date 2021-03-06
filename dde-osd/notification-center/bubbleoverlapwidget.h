/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     zorowk <near.kingzero@gmail.com>
 *
 * Maintainer: zorowk <near.kingzero@gmail.com>
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

#ifndef BUBBLEOVERLAPWIDGET_H
#define BUBBLEOVERLAPWIDGET_H

#include "bubbleitem.h"
#include <QFrame>
#include <memory>

class NotificationEntity;
class NotifyModel;
class BubbleItem;

/*!
 * \~chinese \class HalfRoundedRectWidget
 * \~chinese \brief 气泡发生重叠下方收起的窗口
 */
class HalfRoundedRectWidget : public AlphaWidget
{
public:
    HalfRoundedRectWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
};

/*!
 * \~chinese \class BubbleOverlapWidget
 * \~chinese \brief 气泡发生重叠时显示的窗口
 */
class BubbleOverlapWidget : public QWidget
{
    Q_OBJECT
public:
    BubbleOverlapWidget(const QList<EntityPtr> &entitys,
                        QWidget *parent = nullptr, NotifyModel *model = nullptr);
    ~BubbleOverlapWidget();
    void setModel(NotifyModel *model);                          //设置Model
    BubbleItem *faceBubble() { return m_faceBubbleItem; }       //气泡发生重叠时最上面显示的窗口

private:
    void initOverlap();                                         //初始化气泡发生重叠时的窗口

private:
    QList<EntityPtr> m_notifications;
    NotifyModel *m_notifyModel = nullptr;
    BubbleItem *m_faceBubbleItem = nullptr;

protected:
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE; //鼠标点击时展开重叠的气泡
};

#endif // NOTIFYWIDGET_H
