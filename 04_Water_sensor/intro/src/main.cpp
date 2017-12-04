#include <Arduino.h>

#define pin 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int water = analogRead(pin);
  Serial.println(water);
  delay(500);
}
