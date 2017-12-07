#include <Arduino.h>

#define pin 0
#define led 12

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int resistance = analogRead(pin);

  if (resistance < 300) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
