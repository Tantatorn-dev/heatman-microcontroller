#include "ConnectWifi.h"

void connectWifi(String ssid,String pass){

  WiFi.begin(ssid,pass);
  Serial.println("connecting...");

  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("connected ip:");
  Serial.print( WiFi.localIP());
  Serial.println();

}