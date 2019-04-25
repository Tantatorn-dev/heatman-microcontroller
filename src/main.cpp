#include <Arduino.h>
#include "Sensor.h"

Sensor *sensor = new Sensor();

void setup()
{
  Serial.begin(9600);

  sensor->testSensor();
}

void loop()
{
  Serial.print("Temperature is ");
  Serial.println(sensor->getTemperature());
  delay(3000);
}