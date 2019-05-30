#ifndef LOCKWORKER_H
#define LOCKWORKER_H

#include "global_util/dbus/dbuslockservice.h"
#include "global_util/dbus/dbuslogin1manager.h"
#include "global_util/dbus/dbushotzone.h"
#include "session-widgets/userinfo.h"
#include "../libdde-auth/interface/deepinauthinterface.h"
#include "../libdde-auth/deepinauthframework.h"

#include <QLightDM/SessionsModel>

#include <com_deepin_daemon_logined.h>
#include <com_deepin_daemon_accounts.h>

using LoginedInter = com::deepin::daemon::Logined;
using AccountsInter = com::deepin::daemon::Accounts;

class SessionBaseModel;
class LockWorker : public QObject, public DeepinAuthInterface
{
    Q_OBJECT
public:
    explicit LockWorker(SessionBaseModel * const model, QObject *parent = nullptr);

    void switchToUser(std::shared_ptr<User> user);
    void authUser(const QString &password);
    void setLayout(std::shared_ptr<User> user, const QString &layout);

    void enableZoneDetected(bool disable);

    virtual void onDisplayErrorMsg(const QString &msg) override;
    virtual void onDisplayTextInfo(const QString &msg) override;
    virtual void onPasswordResult(const QString &msg) override;

signals:
    void requestUpdateBackground(const QString &background); // only for greeter auth successd!

private:
    void checkDBusServer(bool isvalid);
    void onUserListChanged(const QStringList &list);
    void onUserAdded(const QString &user);
    void onUserRemove(const QString &user);
    void onLastLogoutUserChanged(uint uid);
    void onLoginUserListChanged(const QString &list);
    bool checkHaveDisplay(const QJsonArray &array);
    bool isLogined(uint uid);
    void onCurrentUserChanged(const QString &user);

    void saveNumlockStatus(std::shared_ptr<User> user, const bool &on);
    void recoveryUserKBState(std::shared_ptr<User> user);

    // lock
    void lockServiceEvent(quint32 eventType, quint32 pid, const QString &username, const QString &message);
    void onUnlockFinished(bool unlocked);
    // greeter
    void userAuthForLightdm(std::shared_ptr<User> user);
    void prompt(QString text, QLightDM::Greeter::PromptType type);
    void message(QString text, QLightDM::Greeter::MessageType type);
    void authenticationComplete();

    void checkPowerInfo();
    void doPowerAction();
    void checkVirtualKB();
    void checkSwap();

    Q_DECL_DEPRECATED bool isDeepin();

    template<typename T>
    T valueByQSettings(const QString &group, const QString &key, const QVariant &failback);

private:
    SessionBaseModel *m_model;

    bool m_authenticating;
    bool m_isThumbAuth;

    AccountsInter *m_accountsInter;
    LoginedInter *m_loginedInter;
    DBusLockService *m_lockInter;
    DBusLogin1Manager* m_login1ManagerInterface;
    DBusHotzone *m_hotZoneInter;
    DeepinAuthFramework *m_authFramework;

    QLightDM::Greeter *m_greeter;

    uint m_currentUserUid;
    uint m_lastLogoutUid;
    User::UserType m_currentUserType;
    std::list<uint> m_loginUserList;
    QString m_password;
    QSettings m_settings;
    QMap<std::shared_ptr<User>, bool> m_lockUser;
};

#endif // LOCKWORKER_H
