#include "FirebaseDB.h"

void connectFirebase()
{
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
    Firebase.reconnectWiFi(true);
}

void updateValue()
{
  float val=0.0;

  if (Firebase.getInt(firebaseData, "/dht11/temperature")) {

    if (firebaseData.dataType() == "int") {
      val = firebaseData.intData();
      Serial.println(val);
    }
  } else {
    Serial.println(firebaseData.errorReason());
  }
  delay(5000);
}