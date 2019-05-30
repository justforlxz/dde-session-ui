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

#ifndef VMFRAME_H
#define VMFRAME_H

#include "widgets/fullscreenbackground.h"
#include "wmchooser.h"
#include <QWidget>
#include <com_deepin_daemon_imageblur.h>

using ImageBlur = com::deepin::daemon::ImageBlur;

class WMFrame : public FullscreenBackground
{
    Q_OBJECT
public:
    explicit WMFrame(QWidget *parent = 0);
    void setConfigPath(const QString &path);

private:
    WMChooser *m_wmchooser;
    ImageBlur *m_blurImageInter;
};

#endif // VMFRAME_H
