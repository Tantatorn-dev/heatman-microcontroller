#include "Siren.h"

Siren::Siren(uint32_t pin){
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
}

void Siren::on(){
    digitalWrite(pin,LOW);
}