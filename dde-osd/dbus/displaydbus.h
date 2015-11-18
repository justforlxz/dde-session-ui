/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.deepin.daemon.Display.xml -c DisplayDbus -p displaydbus
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DISPLAYDBUS_H_1446693036
#define DISPLAYDBUS_H_1446693036

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <QMap>

/*
 * Proxy class for interface com.deepin.daemon.Display
 */

typedef QMap < QString, double > DeviceAndValue;

Q_DECLARE_METATYPE(DeviceAndValue)

class DisplayDbus: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.daemon.Display")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.daemon.Display"; }

public:
    DisplayDbus(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DisplayDbus();

    Q_PROPERTY(DeviceAndValue Brightness READ brightness NOTIFY BrightnessChanged)
    inline DeviceAndValue brightness() const
    { return qvariant_cast< DeviceAndValue >(property("Brightness")); }

    Q_PROPERTY(short DisplayMode READ displayMode NOTIFY DisplayModeChanged)
    inline short displayMode() const
    { return qvariant_cast< short >(property("DisplayMode")); }

    Q_PROPERTY(QString Primary READ primary NOTIFY PrimaryChanged)
    inline QString primary() const
    { return qvariant_cast< QString >(property("Primary")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> QueryCurrentPlanName()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("QueryCurrentPlanName"), argumentList);
    }

    inline QDBusPendingReply<> SwitchMode(short in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("SwitchMode"), argumentList);
    }

Q_SIGNALS: // SIGNALS
// begin property changed signals
void BrightnessChanged();
void DisplayModeChanged();
void PrimaryChanged();
};

namespace com {
  namespace deepin {
    namespace daemon {
      typedef ::DisplayDbus Display;
    }
  }
}
#endif