#include <FirebaseESP8266.h>
#include <ESP8266WiFi.h>

#define FIREBASE_HOST "https://heatman-b390e.firebaseio.com" //Without http:// or https://
#define FIREBASE_AUTH "kESfwiKXS2VNIa04KyTmFbehW6kKnsh7uqVKOJVv"

FirebaseData firebaseData;

void connectFirebase();
void updateValue();