#include "ConnectWifi.h"

void connectWifi(){

  WiFi.begin("CE-ESL","ceeslonly");
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