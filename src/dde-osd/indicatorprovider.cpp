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

#include "indicatorprovider.h"

IndicatorProvider::IndicatorProvider(QObject *parent)
    : AbstractOSDProvider(parent)
{
    m_dats["CapsLockOn"] = ":/icons/OSD_caps_lock_on.svg";
    m_dats["CapsLockOff"] = ":/icons/OSD_caps_lock_off.svg";
    m_dats["NumLockOn"] = ":/icons/OSD_num_lock_on.svg";
    m_dats["NumLockOff"] = ":/icons/OSD_num_lock_off.svg";
    m_dats["TouchpadOn"] = ":/icons/OSD_trackpad_on.svg";
    m_dats["TouchpadOff"] = ":/icons/OSD_trackpad_off.svg";
    m_dats["TouchpadToggle"] = ":/icons/OSD_trackpad_toggle.svg";
}

int IndicatorProvider::rowCount(const QModelIndex &) const
{
    return 1;
}

QVariant IndicatorProvider::data(const QModelIndex &, int) const
{
    return m_dats[m_param];
}

void IndicatorProvider::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QVariant pixData = index.data(Qt::DecorationRole);
    DrawHelper::DrawImage(painter, option, pixData.toString());
}

QSize IndicatorProvider::sizeHint(const QStyleOptionViewItem &, const QModelIndex &) const
{
    return QSize(ImageTextItemWidth, ImageTextItemHeight);
}

bool IndicatorProvider::match(const QString &param)
{
    m_param = param;
    return m_dats.keys().contains(param);
}
