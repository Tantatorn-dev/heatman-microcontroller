#include <Arduino.h>

class AlarmLED{
    public:
    AlarmLED(int pin);
    void on();
    private:
    int pin;
};