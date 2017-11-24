#include <Arduino.h>

#define red 13
#define green 12
#define blue 11

#define redButton 7
#define greenButton 6
#define blueButton 5

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  pinMode(redButton, INPUT);
  pinMode(greenButton, INPUT);
  pinMode(blueButton, INPUT);
  Serial.begin(9600);
}

void loop() {
  int readRed = digitalRead(redButton);
  int readGreen = digitalRead(greenButton);
  int readBlue = digitalRead(blueButton);

  if(readRed){
    digitalWrite(red, HIGH);
  } else {
    digitalWrite(red, LOW);
  }
  if(readGreen){
    digitalWrite(green, HIGH);
  } else {
    digitalWrite(green, LOW);
  }

  if(readBlue){
    digitalWrite(blue, HIGH);
  } else {
    digitalWrite(blue, LOW);
  }
}
