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
set(DDE_SUSPEND_DIALOG_SRCS
    dde-suspend-dialog/suspenddialog.cpp
    dde-suspend-dialog/suspenddialog.h
)

# dde-switchtogreeter
set(DDE_SWITCHTOGREETER_SRCS
    app/switchtogreeter.c
)

# dde-warning-dialog
set(DDE_WARNING_DIALOG_SRCS
    dde-warning-dialog/warningdialog.cpp
    dde-warning-dialog/warningdialog.h
)

# dde-welcome
set(DDE_WELCOME_SRCS
    dde-welcome/utils.h
    dde-welcome/updatecontent.cpp
    dde-welcome/updatecontent.h
    dde-welcome/mainwidget.cpp
    dde-welcome/mainwidget.h
    dde-welcome/utils.cpp
)

# dde-wm-chooser
set(DDE_WM_CHOOSER_SRCS
    dde-wm-chooser/wmchooser.h
    dde-wm-chooser/wmframe.cpp
    dde-wm-chooser/wmframe.h
    dde-wm-chooser/wmchooser.cpp
)

# dmemory-warning-dialog
set(DMEMORY_WARNING_DIALOG_SRCS
    dmemory-warning-dialog/dmemorywarningdialog.h
    dmemory-warning-dialog/dmemorywarningdialogadaptor.cpp
    dmemory-warning-dialog/buttondelegate.cpp
    dmemory-warning-dialog/processinfodelegate.h
    dmemory-warning-dialog/processinfomanager.cpp
    dmemory-warning-dialog/processinfotable.cpp
    dmemory-warning-dialog/processinfomodel.h
    dmemory-warning-dialog/processinfomanager.h
    dmemory-warning-dialog/processinfomodel.cpp
    dmemory-warning-dialog/processinfodelegate.cpp
    dmemory-warning-dialog/processinfotable.h
    dmemory-warning-dialog/dmemorywarningdialogadaptor.h
    dmemory-warning-dialog/dmemorywarningdialog.cpp
    dmemory-warning-dialog/buttondelegate.h
)

# dnetwork-secret-dialog
set(DNETWORK_SECRET_DIALOG_SRCS
    dnetwork-secret-dialog/networksecretdialog.cpp
    dnetwork-secret-dialog/networksecretdialog.h
)

# session-ui-guardien
set(SESSION_UI_GUARDIEN_SRCS
    session-ui-guardien/guardien.cpp
    session-ui-guardien/guardien.h
)

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
    widgets/rounditembutton.cpp
    widgets/controlwidget.cpp
    widgets/mediawidget.h
    widgets/fullscreenbackground.cpp
    widgets/kblayoutwidget.cpp
    widgets/virtualkbinstance.h
    widgets/useravatar.cpp
    widgets/mediawidget.cpp
    widgets/loginbutton.cpp
    widgets/dbreathinglabel.h
    widgets/fullscreenbackground.h
    widgets/keyboardmonitor.cpp
    widgets/darrowrectangle.h
    widgets/errortooltip.h
    widgets/userbreathinglabel.h
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
    session-widgets/lockcontent.cpp
    session-widgets/sessionwidget.h
    session-widgets/sessionwidget.cpp
    session-widgets/shutdownwidget.h
    session-widgets/shutdownwidget.cpp
    session-widgets/userbutton.h
    session-widgets/userbutton.cpp
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
    global_util/framedatabind.h
    global_util/framedatabind.cpp
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

# libdde-auth
set(LIBDDE_AUTH_SRCS
    libdde-auth/authdbusadapter.cpp
    libdde-auth/authagent.cpp
    libdde-auth/interface/deepinauthinterface.h
    libdde-auth/authdbusadapter.h
    libdde-auth/authagent.h
    libdde-auth/deepinauthframework.cpp
    libdde-auth/deepinauthframework.h
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

function(generation_dbus_interface xml class_name class_file option)
    execute_process(COMMAND qdbusxml2cpp ${option} -p ${class_file} -c ${class_name} ${xml}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
endfunction(generation_dbus_interface)

set(dde_control_center_DBUS_SCRS xml/com.deepin.dde.ControlCenter.xml)
qt5_add_dbus_interface(dde_control_center_DBUS_SCRS
xml/com.deepin.dde.ControlCenter.xml
ControlCenterAdaptor
)

set(agent_adapter_DBUS_SRCS xml/com.deepin.daemon.authority.Agent.xml)
qt5_add_dbus_adaptor(agent_adapter_DBUS_SRCS
xml/com.deepin.daemon.authority.Agent.xml
libdde-auth/authagent.h
AuthAgent
)

generation_dbus_interface(
    ${CMAKE_SOURCE_DIR}/src/xml/com.deepin.daemon.Authority.xml
    AuthorityInterface
    ${CMAKE_CURRENT_BINARY_DIR}/authority_interface
    -N
)
set(authority_DBUS_SCRS
    ${CMAKE_CURRENT_BINARY_DIR}/authority_interface.h
    ${CMAKE_CURRENT_BINARY_DIR}/authority_interface.cpp
)

generation_dbus_interface(
    ${CMAKE_SOURCE_DIR}/src/xml/com.deepin.daemon.authority.Transaction.xml
    TransactionInterface
    ${CMAKE_CURRENT_BINARY_DIR}/transaction_interface
    -N
)
set(transaction_DBUS_SCRS
    ${CMAKE_CURRENT_BINARY_DIR}/transaction_interface.h
    ${CMAKE_CURRENT_BINARY_DIR}/transaction_interface.cpp
)

set(SESSION_INCLUDE_FILES
    ${PROJECT_BINARY_DIR}
    ${DtkWidget_INCLUDE_DIRS}
    ${XCB_EWMH_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${Greeter_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${WIDGETS_SRCS}
    ${LIBDDE_AUTH_SRCS}
    ${SESSION_WIDGETS_SRCS}
    ${authority_DBUS_SCRS}
    ${transaction_DBUS_SCRS}
    ${agent_adapter_DBUS_SRCS}
    ${LIBDDE_AUTH_SRCS}
    ${DFrameworkDBus_INCLUDE_DIRS}
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

set(SESSION_LIBS
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
    ${XCB_EWMH_LIBRARIES}
    ${QGSettings_LIBRARIES}
    ${Greeter_LIBRARIES}
)

# dde-lock
add_executable(
    dde-lock
    app/dde-lock.cpp
    ${DDE_LOCK_SRCS}
    ${SESSION_INCLUDE_FILES}
    dde-lock/images.qrc
    dde-lock/logintheme.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-lock PUBLIC
    ${DDE_LOCK_SRCS}
    ${SESSION_INCLUDE_FILES}
)
target_link_libraries(dde-lock PRIVATE
    ${SESSION_LIBS}
)
# end dde-lock

# dde-shsutdown
add_executable(
    dde-shutdown
    app/dde-shutdown.cpp
    ${DDE_SHUTDOWN_SRCS}
    ${SESSION_INCLUDE_FILES}
    ${dde_control_center_DBUS_SCRS}
    dde-shutdown/image.qrc
    dde-shutdown/qss.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-shutdown PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_LOCK_SRCS}
    ${SESSION_INCLUDE_FILES}
    ${dde_control_center_DBUS_SCRS}
)
target_link_libraries(dde-shutdown PRIVATE
    ${SESSION_LIBS}
)
# end dde-shutdown

# lightdm-deepin-greeter
add_executable(
    lightdm-deepin-greeter
    app/lightdm-deepin-greeter.cpp
    ${LIGHTDM_DEEPIN_GREETER_SRCS}
    ${SESSION_INCLUDE_FILES}
    lightdm-deepin-greeter/image.qrc
    lightdm-deepin-greeter/logintheme.qrc
    ${WIDGETS_QRC}
)
target_include_directories(lightdm-deepin-greeter PUBLIC
    ${PROJECT_BINARY_DIR}
    ${LIGHTDM_DEEPIN_GREETER_SRCS}
    ${SESSION_INCLUDE_FILES}
)
target_link_libraries(lightdm-deepin-greeter PRIVATE
    ${SESSION_LIBS}
)
# end lightdm-deepin-greeter

# dde-full-filesystem
add_executable(
    dde-full-filesystem
    app/dde-full-filesystem.cpp
    ${DDE_FULL_FILESYSTEM_SRCS}
    ${SESSION_INCLUDE_FILES}
    dde-full-filesystem/resources.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-full-filesystem PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_FULL_FILESYSTEM_SRCS}
    ${SESSION_INCLUDE_FILES}
)
target_link_libraries(dde-full-filesystem PRIVATE
    ${SESSION_LIBS}
)
# end dde-full-filesystem

# dde-lowpower
add_executable(
    dde-lowpower
    app/dde-lowpower.cpp
    ${DDE_LOWPOWER_SRCS}
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    dde-lowpower/images.qrc
    ${WIDGETS_QRC}
)
target_include_directories(dde-lowpower PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_LOWPOWER_SRCS}
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
)
target_link_libraries(dde-lowpower PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
)
# end dde-lowpower

# dde-osd
add_executable(
    dde-osd
    app/dde-osd.cpp
    ${DDE_OSD_SRCS}
    ${SESSION_INCLUDE_FILES}
    ${dde_control_center_DBUS_SCRS}
    dde-osd/image.qrc
    dde-osd/theme.qrc
)
target_include_directories(dde-osd PUBLIC
    ${DDE_OSD_SRCS}
    ${SESSION_INCLUDE_FILES}
    ${dde_control_center_DBUS_SCRS}
)
target_link_libraries(dde-osd PRIVATE
    ${SESSION_LIBS}
)
# end dde-osd

# dde-suppend-dialog
add_executable(
    dde-suspend-dialog
    app/dde-suspend-dialog.cpp
    ${DDE_SUSPEND_DIALOG_SRCS}
    ${PROJECT_BINARY_DIR}
    ${DtkWidget_INCLUDE_DIRS}
)
target_include_directories(dde-suspend-dialog PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_SUSPEND_DIALOG_SRCS}
    ${DtkWidget_INCLUDE_DIRS}
)
target_link_libraries(dde-suspend-dialog PRIVATE
    ${QT_LIBS}
    ${DtkWidget_LIBRARIES}
)
# dde-suppend-dialog

# dde-switchtogreeter
pkg_search_module(GLIB REQUIRED glib-2.0)
pkg_check_modules(GIO REQUIRED gio-unix-2.0)
pkg_check_modules(PC_SYSTEMD QUIET libsystemd)

find_library(SYSTEMD_LIBRARIES NAMES systemd ${PC_SYSTEMD_LIBRARY_DIRS})
find_path(SYSTEMD_INCLUDE_DIRS systemd/sd-login.h HINTS ${PC_SYSTEMD_INCLUDE_DIRS})

FIND_PATH(GIO_INCLUDE_DIR gio.h
   PATHS
   ${GIO_INCLUDEDIR}
   ${GIO_INCLUDE_DIRS}
   PATH_SUFFIXES glib-2.0/gio/
)

SET(GIO_LIBRARIES ${_GioLibs} )
SET(GIO_INCLUDE_DIRS ${GIO_INCLUDE_DIR} )

add_executable(
    dde-switchtogreeter
    ${DDE_SWITCHTOGREETER_SRCS}
)
target_include_directories(dde-switchtogreeter PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_SWITCHTOGREETER_SRCS}
    ${GLIB_INCLUDE_DIRS}
    ${SYSTEMD_INCLUDE_DIRS}
    ${GIO_INCLUDE_DIRS}
)
target_link_libraries(dde-switchtogreeter PRIVATE
    ${GLIB_LDFLAGS}
    ${SYSTEMD_LIBRARIES}
    ${GIO_LIBRARIES}
)
# dde-switchtogreeter

# dde-warning-dialog
add_executable(
    dde-warning-dialog
    app/dde-warning-dialog.cpp
    ${DDE_WARNING_DIALOG_SRCS}
    ${DtkWidget_INCLUDE_DIRS}
)
target_include_directories(dde-warning-dialog PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_WARNING_DIALOG_SRCS}
    ${DtkWidget_INCLUDE_DIRS}
)
target_link_libraries(dde-warning-dialog PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
)
# dde-warning-dialog

# dde-welcome
add_executable(
    dde-welcome
    app/dde-welcome.cpp
    ${DDE_WELCOME_SRCS}
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${WIDGETS_SRCS}
)
target_include_directories(dde-welcome PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_WELCOME_SRCS}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${WIDGETS_SRCS}
)
target_link_libraries(dde-welcome PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
    ${QGSettings_LIBRARIES}
    ${XCB_EWMH_LIBRARIES}
)
# dde-welcome

# dde-wm-chooser
add_executable(
    dde-wm-chooser
    app/dde-wm-chooser.cpp
    ${DDE_WM_CHOOSER_SRCS}
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${Greeter_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${WIDGETS_SRCS}
)
target_include_directories(dde-wm-chooser PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DDE_WM_CHOOSER_SRCS}
    ${PROJECT_BINARY_DIR}
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${DtkWidget_INCLUDE_DIRS}
    ${GLOBAL_UTIL_SRCS}
    ${DFrameworkDBus_INCLUDE_DIRS}
    ${Greeter_INCLUDE_DIRS}
    ${QGSettings_INCLUDE_DIRS}
    ${WIDGETS_SRCS}
)
target_link_libraries(dde-wm-chooser PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
    ${Greeter_LIBRARIES}
    ${QGSettings_LIBRARIES}
    ${XCB_EWMH_LIBRARIES}
)
# dde-wm-chooser

# dmemory-warning-dialog
add_executable(
    dmemory-warning-dialog
    app/dmemory-warning-dialog.cpp
    ${DMEMORY_WARNING_DIALOG_SRCS}
    ${DFrameworkDBus_INCLUDE_DIRS}
)
target_include_directories(dmemory-warning-dialog PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DMEMORY_WARNING_DIALOG_SRCS}
    ${DFrameworkDBus_INCLUDE_DIRS}
)
target_link_libraries(dmemory-warning-dialog PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
    ${DFrameworkDBus_LIBRARIES}
)
# dmemory-warning-dialog

# dnetwork-secret-dialog
add_executable(
    dnetwork-secret-dialog
    app/dnetwork-secret-dialog.cpp
    ${DNETWORK_SECRET_DIALOG_SRCS}
)
target_include_directories(dnetwork-secret-dialog PUBLIC
    ${PROJECT_BINARY_DIR}
    ${DNETWORK_SECRET_DIALOG_SRCS}
)
target_link_libraries(dnetwork-secret-dialog PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
)
# dnetwork-secret-dialog

# session-ui-guardien
add_executable(
    session-ui-guardien
    app/session-ui-guardien.cpp
    ${SESSION_UI_GUARDIEN_SRCS}
)
target_include_directories(session-ui-guardien PUBLIC
    ${PROJECT_BINARY_DIR}
    ${SESSION_UI_GUARDIEN_SRCS}
)
target_link_libraries(session-ui-guardien PRIVATE
    ${Qt_LIBS}
    ${DtkWidget_LIBRARIES}
)
# session-ui-guardien
