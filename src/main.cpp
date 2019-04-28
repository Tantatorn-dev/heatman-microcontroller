#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"

Sensor *sensor = new Sensor();

void setup()
{
  Serial.begin(9600);
  connectWifi("CE-ESL","ceeslonly");
}

void loop()
{
  delay(500);
}
