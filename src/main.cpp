#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"

Sensor *sensor = new Sensor();
FirebaseDB *firebaseDB = new FirebaseDB();

void setup()
{
  Serial.begin(9600);
  connectWifi("CE-ESL", "ceeslonly");
  firebaseDB->connectFirebase();
}

void loop()
{
  firebaseDB->updateTemperature(12.45);
}
