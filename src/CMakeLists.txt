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
# dde-full-filesystem
set(DDE_FULL_FILESYSTEM_SRCS
    dde-full-filesystem/fullfilesystem.cpp
    dde-full-filesystem/fullfilesystem.h
    dde-full-filesystem/fullfilesystemframe.h
    dde-full-filesystem/fullfilesystemframe.cpp
)

# dde-lowpower
set(DDE_LOWPOWER_SRCS
    dde-lowpower/window.cpp
    dde-lowpower/window.h
)

# dde-osd
set(DDE_OSD_SRCS
    dde-osd/displaymodeprovider.cpp
    dde-osd/kblayoutindicator.cpp
    dde-osd/container.h
    dde-osd/brightnessprovider.h
    dde-osd/brightnessprovider.cpp
    dde-osd/indicatorprovider.h
    dde-osd/displaymodeprovider.h
    dde-osd/abstractosdprovider.h
    dde-osd/kblayoutprovider.h
    dde-osd/audioprovider.h
    dde-osd/delegate.cpp
    dde-osd/osdprovider.h
    dde-osd/osdprovider.cpp
    dde-osd/listview.h
    dde-osd/manager.cpp
    dde-osd/listview.cpp
    dde-osd/common.h
    dde-osd/container.cpp
    dde-osd/indicatorprovider.cpp
    dde-osd/manager.h
    dde-osd/common.cpp
    dde-osd/notification/actionbutton.h
    dde-osd/notification/notificationentity.h
    dde-osd/notification/persistence.cpp
    dde-osd/notification/icondata.cpp
    dde-osd/notification/notificationentity.cpp
    dde-osd/notification/dbuslogin1manager.cpp
    dde-osd/notification/dbusdock_interface.h
    dde-osd/notification/dbus_daemon_interface.h
    dde-osd/notification/dbuslogin1manager.h
    dde-osd/notification/icondata.h
    dde-osd/notification/appbody.h
    dde-osd/notification/appicon.cpp
    dde-osd/notification/dbus_daemon_interface.cpp
    dde-osd/notification/persistence.h
    dde-osd/notification/notifications_dbus_adaptor.cpp
    dde-osd/notification/appbodylabel.h
    dde-osd/notification/appicon.h
    dde-osd/notification/dbusdock_interface.cpp
    dde-osd/notification/appbodylabel.cpp
    dde-osd/notification/notifications_dbus_adaptor.h
    dde-osd/notification/bubblemanager.cpp
    dde-osd/notification/bubblemanager.h
    dde-osd/notification/appbody.cpp
    dde-osd/notification/actionbutton.cpp
    dde-osd/notification/bubble.h
    dde-osd/notification/bubble.cpp
    dde-osd/kblayoutprovider.cpp
    dde-osd/model.cpp
    dde-osd/model.h
    dde-osd/kblayoutindicator.h
    dde-osd/delegate.h
    dde-osd/abstractosdprovider.cpp
    dde-osd/audioprovider.cpp
)

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
    global_util/dbus/dbusmediaplayer2.cpp
    global_util/dbus/dbusvariant.cpp
    global_util/dbus/dbuslockservice.h
    global_util/dbus/dbushotzone.cpp
    global_util/dbus/displayinterface.cpp
    global_util/dbus/dbussessionmanager.cpp
    global_util/dbus/dbushotzone.h
    global_util/dbus/dbuskeyboard.cpp
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
    Sql
REQUIRED)

pkg_check_modules(XCB_EWMH REQUIRED xcb-ewmh x11 xi xcursor xfixes xrandr xext)
pkg_check_modules(DFrameworkDBus REQUIRED dframeworkdbus)
pkg_check_modules(QGSettings REQUIRED gsettings-qt)
pkg_check_modules(Greeter REQUIRED liblightdm-qt5-3)

set(dde_control_center_DBUS_SCRS xml/com.deepin.dde.ControlCenter.xml)
qt5_add_dbus_interface(dde_control_center_DBUS_SCRS
xml/com.deepin.dde.ControlCenter.xml
ControlCenterAdaptor
)

set(INCLUDE_FILES
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${XCB_EWMH_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${Greeter_INCLUDE_DIRS}
    ${dde_control_center_DBUS_SCRS}
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
    Qt5::Sql
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

# dde-full-filesystem
add_executable(
    dde-full-filesystem
    app/dde-full-filesystem.cpp
    ${DDE_FULL_FILESYSTEM_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
    dde-full-filesystem/resources.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-full-filesystem PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_FULL_FILESYSTEM_SRCS}
    ${WIDGETS_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(dde-full-filesystem PRIVATE
    ${LINK_LIBS}
)
# end dde-full-filesystem

# dde-lowpower
add_executable(
    dde-lowpower
    app/dde-lowpower.cpp
    ${DDE_LOWPOWER_SRCS}
    ${INCLUDE_FILES}
    dde-lowpower/images.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-lowpower PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_LOWPOWER_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(dde-lowpower PRIVATE
    ${LINK_LIBS}
)
# end dde-lowpower

# dde-osd
add_executable(
    dde-osd
    app/dde-osd.cpp
    ${DDE_OSD_SRCS}
    ${INCLUDE_FILES}
    dde-osd/image.qrc
    dde-osd/theme.qrc
)
target_include_directories(dde-osd PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_OSD_SRCS}
    ${INCLUDE_FILES}
)
target_link_libraries(dde-osd PRIVATE
    ${LINK_LIBS}
)
# end dde-osd
