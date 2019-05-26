#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "Siren.h"
#include "AlarmLED.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"
#include "Display.h"
#include "Fan.h"

Sensor *sensor_1;
Sensor *sensor_2;

AlarmLED *alarmLED;
Siren *siren;
Display *display;
Fan *fan;

FirebaseDB *firebaseDB;

void setup()
{
  Serial.begin(9600);

  sensor_1 = new Sensor(D3);
  sensor_2 = new Sensor(D4);

  alarmLED = new AlarmLED(D5);
  siren = new Siren(D6);
  fan = new Fan(D7);

  display= new Display();
  display->start();

  connectWifi("CE-ESL", "ceeslonly");
  firebaseDB->connectFirebase();
}

void loop()
{
  firebaseDB->updateTemperature(sensor_1->getTemperature(),sensor_2->getTemperature());
  firebaseDB->updateHumidity(sensor_1->getHumidity(),sensor_2->getHumidity());
  alarmLED->handleEvent(firebaseDB->getAlarmLEDState());
  fan->handleEvent(firebaseDB->getFanState());
  delay(5000);
}
