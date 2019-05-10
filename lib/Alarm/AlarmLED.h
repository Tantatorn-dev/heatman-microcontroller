#include <Arduino.h>

class AlarmLED{
    public:
    AlarmLED(uint32_t pin);
    void on();
    private:
    uint32_t pin;
};