#include <Arduino.h>

class AlarmLED{
    public:
    AlarmLED(int pin);
    void on();
    void off();
    void handleEvent();
    private:
    int pin;
};