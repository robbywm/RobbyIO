#ifndef RobbyIO_h
#define RobbyIO_h

#include "Arduino.h"

void setupPin(byte numberPin, boolean statusMode) {
    pinMode(numberPin, statusMode);
}

void outputSet(byte numberPin, boolean statusPin){
    digitalWrite(numberPin, statusPin);
}

void blink(byte numberPin, int delayBlink){
    digitalWrite(numberPin, 1);
    delay(delayBlink);
    digitalWrite(numberPin, 0);
    delay(delayBlink);
}
#endif