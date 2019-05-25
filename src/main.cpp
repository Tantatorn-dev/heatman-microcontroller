#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "Siren.h"
#include "AlarmLED.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"
#include "Display.h"

Sensor *sensor_1;
Sensor *sensor_2;

AlarmLED *alarmLED;
Siren *siren;
Display *display;

FirebaseDB *firebaseDB;

void setup()
{
  Serial.begin(9600);

  sensor_1 = new Sensor(D3);
  sensor_2 = new Sensor(D4);

  alarmLED = new AlarmLED(D5);
  siren = new Siren(D6);

  display= new Display();
  display->start();

  connectWifi("CE-ESL", "ceeslonly");
  firebaseDB->connectFirebase();
}

void loop()
{
  display->show(sensor_1->getTemperature(),sensor_1->getHumidity());
  delay(1000);
}
