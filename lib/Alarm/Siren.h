#include <Arduino.h>

class Siren{
    public:
    Siren(int pin);
    void on();
    private:
    int pin;
};