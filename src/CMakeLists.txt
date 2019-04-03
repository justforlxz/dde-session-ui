cmake_minimum_required(VERSION 3.7)

# dde-lock
set(DDE_LOCK_SRCS
    dde-lock/dbus/dbuslockagent.h
    dde-lock/dbus/dbuslockfrontservice.cpp
    dde-lock/dbus/dbuslockagent.cpp
    dde-lock/dbus/dbuslockfrontservice.h
    dde-lock/lockframe.cpp
    dde-lock/lockframe.h
    dde-lock/timewidget.cpp
    dde-lock/timewidget.h
)

# dde-shutdown
set(DDE_SHUTDOWN_SRCS
    dde-shutdown/app/shutdownframe.h
    dde-shutdown/app/shutdownframe.cpp
    dde-shutdown/dbusshutdownagent.cpp
    dde-shutdown/common.h
    dde-shutdown/dbusshutdownagent.h
    dde-shutdown/view/systemmonitor.cpp
    dde-shutdown/view/multiuserswarningview.h
    dde-shutdown/view/warningview.h
    dde-shutdown/view/inhibitwarnview.cpp
    dde-shutdown/view/inhibitwarnview.h
    dde-shutdown/view/contentwidget.h
    dde-shutdown/view/systemmonitor.h
    dde-shutdown/view/contentwidget.cpp
    dde-shutdown/view/multiuserswarningview.cpp
)

# lightdm-deepin-greeter
set(LIGHTDM_DEEPIN_GREETER_SRCS
    lightdm-deepin-greeter/loginwindow.cpp
    lightdm-deepin-greeter/loginwindow.h
    lightdm-deepin-greeter/view/logowidget.cpp
    lightdm-deepin-greeter/view/logowidget.h
)
# dde-dman-portal
# dde-full-filesystem
# dde-lowpower
# dde-offline-upgrader
# dde-osd
# dde-suspend-dialog
# dde-switchtogreeter
# dde-warning-dialog
# dde-welcome
# dde-wm-chooser
# dmemory-warning-dialog
# dnetwork-secret-dialog
# session-ui-guardien

# widgets
set(WIDGETS_SRCS
    widgets/useravatar.h
    widgets/loginbutton.h
    widgets/errortooltip.cpp
    widgets/otheruserinput.h
    widgets/controlwidget.h
    widgets/virtualkbinstance.cpp
    widgets/otheruserinput.cpp
    widgets/userbreathinglabel.cpp
    widgets/darrowrectangle.cpp
    widgets/keyboardmonitor.h
    widgets/shutdownwidget.cpp
    widgets/rounditembutton.cpp
    widgets/controlwidget.cpp
    widgets/sessionwidget.h
    widgets/mediawidget.h
    widgets/fullscreenbackground.cpp
    widgets/kblayoutwidget.cpp
    widgets/virtualkbinstance.h
    widgets/useravatar.cpp
    widgets/mediawidget.cpp
    widgets/loginbutton.cpp
    widgets/userbutton.h
    widgets/dbreathinglabel.h
    widgets/userbutton.cpp
    widgets/fullscreenbackground.h
    widgets/sessionwidget.cpp
    widgets/keyboardmonitor.cpp
    widgets/darrowrectangle.h
    widgets/errortooltip.h
    widgets/userbreathinglabel.h
    widgets/shutdownwidget.h
    widgets/dbreathinglabel.cpp
    widgets/kblayoutwidget.h
    widgets/rounditembutton.h
)
# session-widgets
set(SESSION_WIDGETS_SRCS
    session-widgets/userinfo.h
    session-widgets/sessionbasewindow.h
    session-widgets/lockworker.cpp
    session-widgets/sessionbasewindow.cpp
    session-widgets/userinputwidget.h
    session-widgets/framedatabind.h
    session-widgets/lockpasswordwidget.h
    session-widgets/lockpasswordwidget.cpp
    session-widgets/userframe.cpp
    session-widgets/sessionbasemodel.cpp
    session-widgets/userinfo.cpp
    session-widgets/userframe.h
    session-widgets/userinputwidget.cpp
    session-widgets/lockworker.h
    session-widgets/sessionbasemodel.h
    session-widgets/lockcontent.h
    session-widgets/framedatabind.cpp
    session-widgets/lockcontent.cpp
)

# global_util
set(GLOBAL_UTIL_SRCS
    global_util/util_updateui.cpp
    global_util/util_updateui.h
    global_util/dbus/displayinterface.h
    global_util/dbus/dbusdisplaymanager.cpp
    global_util/dbus/dbuslockservice.cpp
    global_util/dbus/dbusdisplaymanager.h
    global_util/dbus/dbusvariant.h
    global_util/dbus/dbusinputdevices.h
    global_util/dbus/dbuslogin1manager.cpp
    global_util/dbus/dbusinputdevices.cpp
    global_util/dbus/dbussessionmanager.h
    global_util/dbus/dbuslogin1manager.h
    global_util/dbus/dbuskeyboard.h
    global_util/dbus/dbuslockfront.h
    global_util/dbus/dbuslockfront.cpp
    global_util/dbus/dbusmediaplayer2.h
    global_util/dbus/dbuscontrolcenter.h
    global_util/dbus/dbusmediaplayer2.cpp
    global_util/dbus/dbusvariant.cpp
    global_util/dbus/dbuslockservice.h
    global_util/dbus/dbushotzone.cpp
    global_util/dbus/displayinterface.cpp
    global_util/dbus/dbussessionmanager.cpp
    global_util/dbus/dbushotzone.h
    global_util/dbus/dbuskeyboard.cpp
    global_util/dbus/dbuscontrolcenter.cpp
    global_util/multiscreenmanager.cpp
    global_util/public_func.cpp
    global_util/multiscreenmanager.h
    global_util/xkbparser.h
    global_util/xkbparser.cpp
    global_util/public_func.h
    global_util/constants.h
    global_util/propertygroup.h
    global_util/propertygroup.cpp
)

# widgets qrc
set(WIDGETS_QRC
widgets/widgetsimages.qrc
widgets/widgetstheme.qrc
)

# Find the library
find_package(PkgConfig REQUIRED)
find_package(DtkWidget REQUIRED)
find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
    Concurrent
    X11Extras
    DBus
    Network
    Svg
    Xml
REQUIRED)

pkg_check_modules(XCB_EWMH REQUIRED xcb-ewmh x11 xi xcursor xfixes xrandr xext)
pkg_check_modules(DFrameworkDBus REQUIRED dframeworkdbus)
pkg_check_modules(QGSettings REQUIRED gsettings-qt)
pkg_check_modules(Greeter REQUIRED liblightdm-qt5-3)

set(INCLUDE_FILES
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${XCB_EWMH_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${Greeter_INCLUDE_DIRS}
)

set(Qt_LIBS
    Qt5::Core
    Qt5::Gui
    Qt5::Network
    Qt5::Widgets
    Qt5::X11Extras
    Qt5::Svg
    Qt5::DBus
    Qt5::Xml
    )

set(LINK_LIBS
    ${Qt_LIBS}
    ${XCB_EWMH_LIBRARIES}
    ${DtkWidget_LIBRARIES}
    ${QGSettings_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
    ${Greeter_LIBRARIES}
    )

# dde-lock
add_executable(
    dde-lock
    app/dde-lock.cpp
    ${DDE_LOCK_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
    dde-lock/images.qrc
    dde-lock/logintheme.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-lock PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_LOCK_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(dde-lock PRIVATE
    ${LINK_LIBS}
)
# end dde-lock

# dde-shsutdown
add_executable(
    dde-shutdown
    app/dde-shutdown.cpp
    ${DDE_SHUTDOWN_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
    dde-shutdown/image.qrc
    dde-shutdown/qss.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-shutdown PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_LOCK_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(dde-shutdown PRIVATE
    ${LINK_LIBS}
)
# end dde-shutdown

# lightdm-deepin-greeter
add_executable(
    lightdm-deepin-greeter
    app/lightdm-deepin-greeter.cpp
    ${LIGHTDM_DEEPIN_GREETER_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
    lightdm-deepin-greeter/image.qrc
    lightdm-deepin-greeter/logintheme.qrc
    ${WIDGETS_QRC}
)
target_include_directories(lightdm-deepin-greeter PUBLIC
    ${PROJECT_BINARY_DIR}
    ${LIGHTDM_DEEPIN_GREETER_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(lightdm-deepin-greeter PRIVATE
    ${LINK_LIBS}
)
# end lightdm-deepin-greeter
