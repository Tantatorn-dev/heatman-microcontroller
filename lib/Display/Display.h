#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class Display
{
public:
    Display();
    void start();
    void show(float, float);

private:
    LiquidCrystal_I2C *lcd;

    byte tempIcon[8] = {
        0b00100,
        0b01010,
        0b01010,
        0b01110,
        0b01110,
        0b11111,
        0b11111,
        0b01110,
    };

    byte humidIcon[8] = {
        0b00100,
        0b00100,
        0b01010,
        0b01010,
        0b10001,
        0b10001,
        0b10001,
        0b01110,
    };

};