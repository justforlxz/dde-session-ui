include(../libdde-auth/libdde-auth.pri)

INCLUDEPATH += $$PWD

HEADERS += \
    $$PWD/sessionbasewindow.h \
    $$PWD/userinputwidget.h \
    $$PWD/sessionbasemodel.h \
    $$PWD/userinfo.h \
    $$PWD/userframe.h \
    $$PWD/lockcontent.h \
    $$PWD/lockworker.h \
    $$PWD/framedatabind.h \
    $$PWD/lockpasswordwidget.h

SOURCES += \
    $$PWD/sessionbasewindow.cpp \
    $$PWD/userinputwidget.cpp \
    $$PWD/sessionbasemodel.cpp \
    $$PWD/userinfo.cpp \
    $$PWD/userframe.cpp \
    $$PWD/lockcontent.cpp \
    $$PWD/lockworker.cpp \
    $$PWD/framedatabind.cpp \
    $$PWD/lockpasswordwidget.cpp
