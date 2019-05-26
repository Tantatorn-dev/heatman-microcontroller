#include <Arduino.h>

class Fan{
    public:
    Fan(int);
    void on();
    void off();
    void handleEvent(String);
    private:
    int pin;
};