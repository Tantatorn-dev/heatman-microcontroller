#include <Arduino.h>

class Siren{
    public:
    Siren(int pin);
    void on();
    void off();
    void handleEvent(String);
    private:
    int pin;
    unsigned long timer;
};