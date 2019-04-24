#include <Arduino.h>
#include <ConnectWifi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  connectWifi();
}

void loop() {
  // put your main code here, to run repeatedly:
}