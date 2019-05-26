#include "Fan.h"

Fan::Fan(int pin){
    this->pin = pin;
    pinMode(pin,OUTPUT);
}

void Fan::on(){
    digitalWrite(pin,HIGH);
}

void Fan::off(){
    digitalWrite(pin,LOW);
}

void Fan::handleEvent(String status){
    if(status=="ON"){
        on();
    }
    else if(status=="OFF"){
        off();
    }
}