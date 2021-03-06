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

#ifndef BUBBLEDELEGATE_H
#define BUBBLEDELEGATE_H

#include <QStyledItemDelegate>
/*!
 * \~chinese \class BubbleDelegate
 * \~chinese \brief 继承于QStyledItemDelegate,QAbstractItemDelegate 是model/view架构中的用于delegate的抽象基类。
 * \~chinese 缺省的delegate实现在QItemDelegate类中提供.它可以用于Qt标准views的缺省 delegate.通过重写以下方法paint,
 * \~chinese createEditor,sizeHint,updateEditorGeometry,eventFilter提供一个自定义的委托样式
 */
class BubbleDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    BubbleDelegate(QObject *parent = Q_NULLPTR);

public:
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // BUBBLEDELEGATE_H
