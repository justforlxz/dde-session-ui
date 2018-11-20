#include "sessionbasemodel.h"

#include <QDebug>

SessionBaseModel::SessionBaseModel(AuthType type, QObject *parent)
    : QObject(parent)
    , m_currentType(type)
    , m_currentUser(nullptr)
    , m_powerAction(PowerAction::RequireNormal)
{

}

std::shared_ptr<User> SessionBaseModel::findUserByUid(const uint uid) const
{
    for (auto user : m_userList) {
        if (user->uid() == uid) {
            return user;
        }
    }

    qWarning() << "Wrong, you shouldn't be here!";
    return std::shared_ptr<User>(nullptr);
}

const QList<std::shared_ptr<User> > SessionBaseModel::logindUser()
{
    QList<std::shared_ptr<User>> userList;
    for (auto user : m_userList) {
        if (user->isLogin()) {
            userList << user;
        }
    }

    return userList;
}

void SessionBaseModel::userAdd(std::shared_ptr<User> user)
{
    m_userList << user;

    std::sort(m_userList.begin(), m_userList.end(), [=] (std::shared_ptr<User> user1, std::shared_ptr<User> user2) {
        return user1->uid() < user->uid();
    });

    emit onUserAdded(user);
}

void SessionBaseModel::userRemoved(std::shared_ptr<User> user)
{
    emit onUserRemoved(user->uid());

    m_userList.removeOne(user);
}

void SessionBaseModel::setCurrentUser(std::shared_ptr<User> user)
{
    m_currentUser = user;

    emit currentUserChanged(user);
}

void SessionBaseModel::setLastLogoutUser(const std::shared_ptr<User> &lastLogoutUser)
{
    m_lastLogoutUser = lastLogoutUser;
}

void SessionBaseModel::setSessionKey(const QString &sessionKey)
{
    if (m_sessionKey == sessionKey) return;

    m_sessionKey = sessionKey;

    emit onSessionKeyChanged(sessionKey);
}

void SessionBaseModel::setPowerAction(const PowerAction &powerAction)
{
    if (powerAction == m_powerAction) return;

    m_powerAction = powerAction;

    emit onPowerActionChanged(powerAction);
}

void SessionBaseModel::setCurrentModeState(const ModeStatus &currentModeState)
{
    if (m_currentModeState == currentModeState) return;

    m_currentModeState = currentModeState;

    emit onStatusChanged(currentModeState);
}