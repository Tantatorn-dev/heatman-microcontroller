#include <FirebaseESP8266.h>

FirebaseData firebaseData;

#define FIREBASE_HOST "https://heatman-b390e.firebaseio.com" //Without http:// or https://
#define FIREBASE_AUTH "kESfwiKXS2VNIa04KyTmFbehW6kKnsh7uqVKOJVv"

void connectFirebase();
void updateValue();