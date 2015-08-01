#include <Arduino.h>
#include <LightSensor.h>

LightSensor::LightSensor(int pin) {
  _pin = pin;
}

int LightSensor::value() {
  return analogRead(_pin); // range: 0 - 1023
}

int LightSensor::percent() {
  return int(value() / 1023.0 * 100);
}