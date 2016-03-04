/*******************************************************************************
Luftballon
 - must see everything
*******************************************************************************/
#include <Adafruit_MotorShield.h>

#define LED_PIN 13

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

// setup motor here - https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino?view=all

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1);           
  digitalWrite(LED_PIN, LOW); 
  delay(999);           
}

