/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
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

#ifndef COMMON_H
#define COMMON_H

#include <QPainter>
#include <QStyleOptionViewItem>
#include <QDebug>

#define Pair(x, y) QPair<QString, QString>(x, y)

static const int ImageTextItemWidth = 140;
static const int ImageTextItemHeight = 140;
static const int TextItemWidth = 200;
static const int TextItemHeight = 36;

static const QColor ItemHighlightColor = "#01bdff";

class DrawHelper {
public:
    static void DrawImage(QPainter *painter, const QStyleOptionViewItem &option, const QString &pix, bool withText = false, bool withProgress = false);
    static void DrawText(QPainter *painter, const QStyleOptionViewItem &option, const QString &text, QColor color = Qt::black, bool withImage = true);
    static void DrawProgressBar(QPainter *painter, const QStyleOptionViewItem &option, double progress);
    static void DrawCenterNum(QPainter *painter, const QStyleOptionViewItem &option, const QString &text, const bool isCurrent);
    static void DrawBackground(QPainter *painter, const QStyleOptionViewItem &option);
    static void DrawVolumeGraduation(QPainter *painter, const QStyleOptionViewItem &option);
};

#endif // COMMON_H
