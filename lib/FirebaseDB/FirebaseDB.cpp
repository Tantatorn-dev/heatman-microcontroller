#include "FirebaseDB.h"

FirebaseDB::FirebaseDB(){

}

void FirebaseDB::connectFirebase()
{
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void FirebaseDB::updateTemperature(float value_1,float value_2)
{
  //first sensor
  Firebase.setFloat("/DHT11_1/temperature",value_1);
  if (Firebase.failed()) {
      Serial.print("DHT11_1 error");
      Serial.println(Firebase.error());  
      return;
  }
  //second sensor
  Firebase.setFloat("/DHT11_2/temperature",value_2);
  if (Firebase.failed()) {
      Serial.print("DHT11_2 error");
      Serial.println(Firebase.error());  
      return;
  }
}

void FirebaseDB::updateHumidity(float value_1,float value_2)
{
  //first sensor
  Firebase.setFloat("/DHT11_1/humidity",value_1);
  if (Firebase.failed()) {
      Serial.print("DHT11_1 error");
      Serial.println(Firebase.error());  
      return;
  }
  //second sensor
  Firebase.setFloat("/DHT11_2/humidity",value_2);
  if (Firebase.failed()) {
      Serial.print("DHT11_2 error");
      Serial.println(Firebase.error());  
      return;
  }
}

String FirebaseDB::getAlarmLEDState(){
  return Firebase.getString("/AlarmLED/state");
}

String FirebaseDB::getSirenState(){
  return Firebase.getString("/Siren/state");
}

String FirebaseDB::getFanState(){
  return Firebase.getString("/Fan/state");
}