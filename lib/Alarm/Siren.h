#include <Arduino.h>

class Siren{
    public:
    Siren(uint32_t pin);
    void on();
    private:
    int pin;
};