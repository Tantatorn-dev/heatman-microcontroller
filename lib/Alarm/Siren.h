#include <Arduino.h>

class Siren{
    public:
    Siren(int pin);
    void on();
    void handleEvent();
    private:
    int pin;
};