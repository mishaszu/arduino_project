#include <Arduino.h>

#define pin 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int resistance = analogRead(pin);
  Serial.println(resistance);
  delay(500);
}
