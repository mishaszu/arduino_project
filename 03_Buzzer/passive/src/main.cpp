#include <Arduino.h>

/*
perdiod to play = 1/hz * 1000000
*/
#define g 2550    // 392 Hz
#define b 2028    // 493 Hz
#define C 1912    // 523 Hz

#define pin 13

int duration = 500;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  int time = 0;
  while(time < duration) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(C/2);
    digitalWrite(pin, LOW);
    delayMicroseconds(C/2);
    time++;
  }
  delayMicroseconds(duration);
  time = 0;
  while(time < duration) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(b/2);
    digitalWrite(pin, LOW);
    delayMicroseconds(b/2);
    time++;
  }
  delayMicroseconds(duration);
  time = 0;
  while(time < duration) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(g/2);
    digitalWrite(pin, LOW);
    delayMicroseconds(g/2);
    time++;
  }
  delay(1000);
}
