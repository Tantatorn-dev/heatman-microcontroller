#include <FirebaseESP8266.h>

#define FIREBASE_HOST "https://heatman-b390e.firebaseio.com" //Without http:// or https://
#define FIREBASE_AUTH "kESfwiKXS2VNIa04KyTmFbehW6kKnsh7uqVKOJVv"

class FirebaseDB
{
public:
    FirebaseDB();
    void connectFirebase();
    void updateTemperature(float value);
    void updateHumidity(float value);
private:
    FirebaseData firebaseData;
};