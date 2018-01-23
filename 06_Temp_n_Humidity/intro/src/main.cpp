#include <Arduino.h>
#include <dht.h>

#define dht_pin 7
dht DHT;

void setup() {
  Serial.begin(9600);
  pinMode(dht_pin, INPUT);
}

void loop() {
  int check = DHT.read11(dht_pin);
  Serial.print("Temperature: ");
  Serial.print(DHT.temperature);
  Serial.print("*C | Humidity: ");
  Serial.print(DHT.humidity);
  Serial.println("%");
  delay(1000);
}
