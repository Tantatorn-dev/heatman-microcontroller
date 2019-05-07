#include "AlarmLED.h"

AlarmLED::AlarmLED(uint32_t pin){
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
}

void AlarmLED::on(){
    digitalWrite(pin,LOW);
}