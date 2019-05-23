#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "Siren.h"
#include "AlarmLED.h"
#include "ConnectWifi.h"

Sensor *sensor_1;
Sensor *sensor_2;

AlarmLED *alarmLED;
Siren *siren;

void setup()
{
  Serial.begin(9600);

  sensor_1 = new Sensor(D3);
  sensor_2 = new Sensor(D4);

  alarmLED = new AlarmLED(D1);
  siren = new Siren(D2);

  connectWifi("CE-ESL", "ceeslonly");
}

void loop()
{
  alarmLED->on();
  siren->on();

  delay(5000);
}
