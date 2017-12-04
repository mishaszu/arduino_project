#include <Arduino.h>
#define button 12
#define buzzer 13

int push = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  push = digitalRead(button);
  if (push) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
}

