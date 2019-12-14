#include "shortcutmanage.h"
#include "bubbleitem.h"
#include "bubblegroup.h"
#include "appgroupmodel.h"
#include "notifymodel.h"
#include "notification/button.h"

#include <QWidget>
#include <QListView>
#include <QApplication>
#include <QKeyEvent>
#include <QDebug>
#include <DIconButton>

DWIDGET_USE_NAMESPACE

ShortcutManage *ShortcutManage::m_instance = nullptr;

ShortcutManage::ShortcutManage(QObject *parent)
    : QObject(parent)
{
    qApp->installEventFilter(this);
}

ShortcutManage *ShortcutManage::instance(QObject *parent)
{
    if (!m_instance)
        m_instance = new ShortcutManage(parent);

    return m_instance;
}

void ShortcutManage::setAppModel(AppGroupModel *model)
{
    m_appModel = model;
    m_currentGroupIndex = m_appModel->index(0);

    if (!m_appModel->appGroups().isEmpty()) {
        auto m_currentApp = m_appModel->appGroups().first();
        auto notify_model = m_currentApp->notifyModel().value<std::shared_ptr<NotifyModel>>();

        if (notify_model != nullptr) {
            m_currentIndex = notify_model->index(0);
        }
    }
}

bool ShortcutManage::handBubbleTab(QWidget *item)
{
    BubbleItem *bubble = dynamic_cast<BubbleItem *>(item);
    if (bubble == nullptr) return true;

    Button *action_btn = dynamic_cast<Button *>(m_currentElement);
    if (action_btn != nullptr) {
        action_btn->setHoverState(false);
    }

    QList<QWidget *> elements = bubble->bubbleElements();
    const int last_pos = elements.indexOf(m_currentElement) + 1;
    if (last_pos < elements.count()) {
        m_currentElement = elements.at(last_pos);
        DIconButton *close_btn = dynamic_cast<DIconButton *>(m_currentElement);
        if (close_btn != nullptr) {
            close_btn->setChecked(true);
        } else {
            Button *action_btn = dynamic_cast<Button *>(m_currentElement);
            if (action_btn != nullptr) {
                action_btn->setHoverState(true);
            }
        }
    } else {
        Button *action_btn = dynamic_cast<Button *>(m_currentElement);
        if (action_btn != nullptr) {
            action_btn->setHoverState(false);
        }
        m_currentElement = nullptr;
    }
    return m_currentElement == nullptr;
}

void ShortcutManage::calcCurrentIndex()
{
    QListView *group_view = m_currentIndex.data(NotifyModel::NotifyViewRole).value<QListView *>();
    if (group_view != nullptr) {
        int row = m_currentIndex.row();
        if (handBubbleTab(group_view->indexWidget(m_currentIndex))) {
            m_currentIndex = group_view->model()->index(row + 1, 0);

            if (m_currentIndex.isValid()) {
                group_view->setCurrentIndex(m_currentIndex);
                group_view->scrollTo(m_currentIndex);
            } else {
                QListView *app_view = m_currentGroupIndex.data(AppGroupModel::GroupViewRole).value<QListView *>();
                if (app_view != nullptr) {
                    int row = m_currentGroupIndex.row();
                    m_currentGroupIndex = app_view->model()->index(row + 1, 0);
                    if (m_currentGroupIndex.isValid()) {
                        app_view->setCurrentIndex(m_currentGroupIndex);
                        app_view->scrollTo(m_currentGroupIndex);
                    }

                    auto model = m_currentGroupIndex.data(AppGroupModel::NotifyModelRole).value<std::shared_ptr<NotifyModel>>();
                    if (model != nullptr) {
                        m_currentIndex = model->index(0);
                        group_view = m_currentIndex.data(NotifyModel::NotifyViewRole).value<QListView *>();
                        group_view->setCurrentIndex(m_currentIndex);
                        group_view->scrollTo(m_currentIndex);
                    }
                }
            }
        }
    }
}

bool ShortcutManage::handKeyEvent(QObject *object, QKeyEvent *event)
{
    Q_UNUSED(object);
    if (event->key() == Qt::Key_Tab) {
        calcCurrentIndex();
    } else if (event->key() == Qt::Key_Return) {
        if (m_currentElement != nullptr) {
            DIconButton *close_btn = dynamic_cast<DIconButton *>(m_currentElement);
            if (close_btn != nullptr) {
                close_btn->click();
                m_currentElement = nullptr;
            } else {
                Button *action_btn = dynamic_cast<Button *>(m_currentElement);
                if (action_btn != nullptr) {
                    action_btn->clicked();
                }
            }
        }
    }
    return true;
}

bool ShortcutManage::handMouseEvent(QObject *object, QMouseEvent *event)
{
    Q_UNUSED(object);
    QListView *app_view = m_appModel->view();
    if (app_view != nullptr) {
        m_currentGroupIndex =  app_view->indexAt(event->pos());
        if (m_currentGroupIndex.isValid()) {
            auto model = m_currentGroupIndex.data(AppGroupModel::NotifyModelRole).value<std::shared_ptr<NotifyModel>>();
            if (model != nullptr) {
                QListView *group_view = model->view();
                if (group_view != nullptr) {
                    m_currentIndex = group_view->indexAt(event->pos());
                }
            }
        }
    }
    return false;
}

bool ShortcutManage::eventFilter(QObject *object, QEvent *event)
{
    Q_UNUSED(object);
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *key = static_cast<QKeyEvent *>(event);
        return handKeyEvent(object, key);
    } else if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouse = static_cast<QMouseEvent *>(event);
        return handMouseEvent(object, mouse);
    }

    return false;
}