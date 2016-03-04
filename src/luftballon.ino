/*******************************************************************************
Luftballon
 - must see everything
*******************************************************************************/
#include <Adafruit_MotorShield.h>
#include <TimerOne.h>

#define LED_PIN 13

bool led_state = LOW;

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

// setup motor here - https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino?view=all

void setup() {
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(secondTimer);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
}

void secondTimer() {
  led_state = !led_state;
  digitalWrite(LED_PIN, led_state);
}
