#include <Arduino.h>
#include "Sensor.h"
#include "Thermistor.h"
#include "FirebaseDB.h"

Sensor *sensor = new Sensor();

void setup() {
Serial.begin(9600);
}

void loop() {


  delay(500);
}
