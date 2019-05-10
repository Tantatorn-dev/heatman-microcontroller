#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "Siren.h"
#include "AlarmLED.h"
#include "FirebaseDB.h"
#include "ConnectWifi.h"

Sensor *sensor_1;
Sensor *sensor_2;
Siren *siren;
AlarmLED *alarmLED;
FirebaseDB *firebaseDB;

void setup()
{
  Serial.begin(9600);
  sensor_1=new Sensor(D3);
  sensor_2=new Sensor(D4);
  siren= new Siren(D1);
  alarmLED = new AlarmLED(D2);
  firebaseDB=new FirebaseDB();
  connectWifi("CE-ESL", "ceeslonly");
  firebaseDB->connectFirebase();
}

void loop()
{
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
}
