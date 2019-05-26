#include "Display.h"

Display::Display()
{
    lcd = new LiquidCrystal_I2C(0x27, 20, 4);
}

void Display::start()
{
    lcd->init();
    lcd->backlight();

    lcd->createChar(0, tempIcon);
    lcd->createChar(1, humidIcon);
}

void Display::show(float temperature, float humidity)
{
    lcd->setCursor(0, 0);
    lcd->print("Heatman");
    lcd->setCursor(1, 1);
    lcd->write(byte(0));
    lcd->print(" ");
    lcd->print(temperature);
    lcd->print((char)223);
    lcd->print("C ");
    lcd->setCursor(9, 1);
    lcd->write(byte(1));
    lcd->print(" ");
    lcd->print(humidity);
    lcd->print("%H");
}