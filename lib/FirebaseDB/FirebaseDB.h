#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST "heatman-b390e.firebaseio.com" //Without http:// or https://
#define FIREBASE_AUTH "kESfwiKXS2VNIa04KyTmFbehW6kKnsh7uqVKOJVv"

class FirebaseDB
{
public:
    FirebaseDB();
    void connectFirebase();
    void updateTemperature(float, float);
    void updateHumidity(float, float);
    String getAlarmLEDState();
    String getSirenState();
    String getFanState();
};