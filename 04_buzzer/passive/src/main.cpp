#include <Arduino.h>
#define  g     2550    // 392 Hz
#define  b     2028    // 493 Hz
#define  C     1912    // 523 Hz

int melody[] = {C,b,g};
int duration = 100;

#define pin 12

void tone(int t);

void setup() {
  pinMode(12, OUTPUT);
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
