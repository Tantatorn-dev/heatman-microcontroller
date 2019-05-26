#include "Siren.h"

Siren::Siren(int pin){
    this->pin=pin;
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
}

void Siren::on(){
    digitalWrite(pin,LOW);
}

void Siren::off(){
    digitalWrite(pin,HIGH);
}

void Siren::handleEvent(String status){
    if(status == "ON"){
        on();
        delay(2000);
        off();
        delay(2000);
    }
    else if(status == "OFF"){
        off();
    }
}