#include <Arduino.h>

class AlarmLED{
    public:
    AlarmLED(int pin);
    void on();
    void off();
    void handleEvent(String);
    private:
    int pin;
};