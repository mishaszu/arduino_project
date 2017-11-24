#include <Arduino.h>

int pin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int read = analogRead(pin);
  Serial.println(read);
  delay(500);
}
