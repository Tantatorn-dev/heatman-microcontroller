#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

const int DHTPIN = D5;
const int DHTTYPE = DHT11;

class Sensor
{
public:
    Sensor();
    ~Sensor();
    
    void testSensor();
    float getTemperature();
    float getHumidity();

private:
    DHT_Unified *dht;
    sensor_t sensor;
    sensors_event_t event;
    uint32_t delayMS;
};