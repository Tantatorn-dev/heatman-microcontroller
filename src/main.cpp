#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"

Sensor *sensor_1 = new Sensor(D3);
Sensor *sensor_2 = new Sensor(D4);
FirebaseDB *firebaseDB = new FirebaseDB();

void setup()
{
  Serial.begin(9600);
  connectWifi("CE-ESL", "ceeslonly");
  firebaseDB->connectFirebase();
}

void loop()
{
  Serial.print(sensor_1->getTemperature());
  Serial.print(" ");
  Serial.print(sensor_2->getTemperature());
  Serial.print(" ");
  Serial.println(getThermistorTemperature());
  delay(3000);
}
