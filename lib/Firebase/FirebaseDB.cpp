#include "FirebaseDB.h"

FirebaseDB::FirebaseDB(){

}

void FirebaseDB::connectFirebase()
{
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
    Firebase.reconnectWiFi(true);
}

void FirebaseDB::updateTemperature(float value)
{
  if (Firebase.setFloat(firebaseData, "/dht11/temperature",value)) {
    Serial.println("The temperature is updated");
  } else {
    Serial.println(firebaseData.errorReason());
  }
  delay(5000);
}

void FirebaseDB::updateHumidity(float value)
{
  if (Firebase.setFloat(firebaseData, "/dht11/humidity",value)) {
    Serial.println("The humidity is updated");
  } else {
    Serial.println(firebaseData.errorReason());
  }
  delay(5000);
}