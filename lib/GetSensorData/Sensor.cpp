#include "Sensor.h"

Sensor::Sensor(uint32_t dht_pin)
{
    //init sensor
    dht = new DHT_Unified(dht_pin, DHTTYPE);

    dht->begin();

    dht->temperature().getSensor(&sensor);

    // Set delay between sensor readings based on sensor details.
    delayMS = sensor.min_delay / 1000;

}

Sensor::~Sensor(){
    delete dht;
}

void Sensor::testSensor(){
    Serial.println(F("------------------------------------"));
    Serial.println("Test DHT11 sensor");
    Serial.println(F("------------------------------------"));
    Serial.println(F("Temperature Sensor"));
    Serial.print(F("Sensor Type: "));
    Serial.println(sensor.name);
    Serial.print(F("Driver Ver:  "));
    Serial.println(sensor.version);
    Serial.print(F("Unique ID:   "));
    Serial.println(sensor.sensor_id);
    Serial.print(F("Max Value:   "));
    Serial.print(sensor.max_value);
    Serial.println(F("°C"));
    Serial.print(F("Min Value:   "));
    Serial.print(sensor.min_value);
    Serial.println(F("°C"));
    Serial.print(F("Resolution:  "));
    Serial.print(sensor.resolution);
    Serial.println(F("°C"));
    Serial.println(F("------------------------------------"));

    // Print humidity sensor details.
    dht->humidity().getSensor(&sensor);
    Serial.println(F("Humidity Sensor"));
    Serial.print(F("Sensor Type: "));
    Serial.println(sensor.name);
    Serial.print(F("Driver Ver:  "));
    Serial.println(sensor.version);
    Serial.print(F("Unique ID:   "));
    Serial.println(sensor.sensor_id);
    Serial.print(F("Max Value:   "));
    Serial.print(sensor.max_value);
    Serial.println(F("%"));
    Serial.print(F("Min Value:   "));
    Serial.print(sensor.min_value);
    Serial.println(F("%"));
    Serial.print(F("Resolution:  "));
    Serial.print(sensor.resolution);
    Serial.println(F("%"));
    Serial.println(F("------------------------------------"));
}

float Sensor::getTemperature(){
  dht->temperature().getEvent(&event);
  if (isnan(event.temperature)) {
    Serial.println(F("Error reading temperature!"));
    return 0;
  }
  else {
      return event.temperature;
  }
}

float Sensor::getHumidity(){
  dht->humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println(F("Error reading humidity!"));
    return 0;
  }
  else {
      return event.relative_humidity;
  }
}