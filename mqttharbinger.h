#ifndef MQTTHARBINGER_H
#define MQTTHARBINGER_H

#include <QWidget>
#include <QtCore/QDateTime>
#include <QMqttClient>

class MqttHarbinger : public QWidget
{
    Q_OBJECT

public:
    explicit MqttHarbinger(QWidget *parent = nullptr);
    void testMqtt();
    void batterySubscription();

    QMqttClient *m_client;

signals:
    //void mqttBatteryEvent (int idCell, QString dataType, QString message);

    void batteryChargeEvent (int idCell, int value);
    void batteryTemperatureEvent (int idCell, float value);
    void batteryVoltageEvent (int idCell, float value);
    void batteryCurrentEvent (int idCell, float value);

public slots:

private:

};

#endif // MQTTHARBINGER_H