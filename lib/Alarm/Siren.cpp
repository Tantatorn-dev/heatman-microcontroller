#include "Siren.h"

Siren::Siren(int pin){
    this->pin=pin;
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
}

void Siren::on(){
    digitalWrite(pin,LOW);
}