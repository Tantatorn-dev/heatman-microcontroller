#include "AlarmLED.h"

AlarmLED::AlarmLED(int pin){
    this->pin = pin;
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
}

void AlarmLED::on(){
    digitalWrite(pin,LOW);
}

void AlarmLED::off(){
    digitalWrite(pin,HIGH);
}

void AlarmLED::handleEvent(){
    
}