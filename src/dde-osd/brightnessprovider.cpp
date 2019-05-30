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

#include "brightnessprovider.h"

BrightnessProvider::BrightnessProvider(QObject *parent)
    : AbstractOSDProvider(parent),
      m_displayInter(new com::deepin::daemon::Display("com.deepin.daemon.Display",
                                                      "/com/deepin/daemon/Display",
                                                      QDBusConnection::sessionBus(), this))
{
    m_suitableParams << "BrightnessUp" << "BrightnessDown";

    m_displayInter->setSync(true, false);
}

int BrightnessProvider::rowCount(const QModelIndex &) const
{
    return 1;
}

QVariant BrightnessProvider::data(const QModelIndex &, int role) const
{
    if (role == Qt::DecorationRole) {
        return ":/icons/OSD_light.svg";
    }

    return m_displayInter->brightness().value(m_displayInter->primary(), 0);
}

void BrightnessProvider::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QVariant imageData = index.data(Qt::DecorationRole);
    QVariant progressData = index.data(Qt::DisplayRole);

    DrawHelper::DrawImage(painter, option, imageData.toString(), false, true);
    DrawHelper::DrawProgressBar(painter, option, progressData.toDouble());
}

QSize BrightnessProvider::sizeHint(const QStyleOptionViewItem &, const QModelIndex &) const
{
    return QSize(ImageTextItemWidth, ImageTextItemHeight);
}
