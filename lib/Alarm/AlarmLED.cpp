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

void AlarmLED::handleEvent(String status){
    if(status == "ON"){
        on();
    }
    else if(status=="OFF"){
        off();
    }
}