QT       += core gui widgets

TARGET = dnetwork-secret-dialog
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11 link_pkgconfig
PKGCONFIG += dtkwidget

SOURCES += \
        main.cpp \
    networksecretdialog.cpp

HEADERS += \
    networksecretdialog.h

RESOURCES += \
    resources.qrc

target.path = /usr/lib/deepin-daemon/
INSTALLS   += target
