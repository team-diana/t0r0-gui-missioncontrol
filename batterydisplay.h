#ifndef BATTERYDISPLAY_H
#define BATTERYDISPLAY_H

#include <QWidget>
#include <QPainter>

#include "batteryindicator.h"
#include "batterypanel.h"
#include "colors.h"

#define BAT_DISPLAY_POSX 1500
// #define BAT_DISPLAY_POSY 370
#define BAT_DISPLAY_POSY 50
#define BAT_DISPLAY_WIDTH 334
#define BAT_DISPLAY_HEIGHT 285

#define COL_SPACER 10
#define ROW_SPACER 10

class BatteryDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit BatteryDisplay(QWidget *parent = nullptr);

signals:

public slots:
    void batteryChargeUpdate(int idCell, int percentage);
    void batteryVoltageUpdate(int idCell, float value);
    void batteryTemperatureUpdate(int idCell, float value);
    void batteryCurrentUpdate(int idCell, float value);


protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
    BatteryPanel *pbattery[5];

};

#endif // BATTERYDISPLAY_H
