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

#include "dde-wm-chooser/wmframe.h"
#include "global_util/propertygroup.h"
#include "global_util/multiscreenmanager.h"

#include <DApplication>
#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QDebug>
#include <QTranslator>
#include <DLog>
#include <QScreen>
#include <QWindow>
#include <QDesktopWidget>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    a.setApplicationName("deepin-wm-chooser");

    QTranslator translator;
    translator.load("/usr/share/dde-session-ui/translations/dde-session-ui_" + QLocale::system().name());
    a.installTranslator(&translator);

    QCommandLineOption config(QStringList() << "c" << "config", "");
    config.setValueName("ConfigPath");

    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addOption(config);
    parser.process(a);

    if (parser.isSet(config)) {
        PropertyGroup *pg = new PropertyGroup();

        pg->addProperty("contentVisible");

        auto createFrame = [&] (QScreen *screen) -> QWidget* {
            WMFrame *w = new WMFrame;
            w->setScreen(screen);
            pg->addObject(w);
            w->setConfigPath(parser.value(config));
            QObject::connect(w, &WMFrame::destroyed, pg, &PropertyGroup::removeObject);
            w->show();
            return w;
        };

        MultiScreenManager multi_screen_manager;
        multi_screen_manager.register_for_mutil_screen(createFrame);
    } else {
        return 0;
    }

    return a.exec();
}
