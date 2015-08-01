// Arduino Light Sensor Library - A simple library for photoresistors
// Copyright 2015 Alex Taujenis
// MIT License

#include <Arduino.h>
#include <LightSensor.h>

LightSensor::LightSensor(int pin) {
  _pin = pin;
}

int LightSensor::value() {  // range: 0 - 1023
  return analogRead(_pin);
}

int LightSensor::percent() { // range: 0 - 100
  return int(value() / 1023.0 * 100);
}

int LightSensor::inverseValue() {  // range: 1023 - 0
  return 1023 - value();
}

int LightSensor::inversePercent() { // range: 100 - 0
  return 100 - percent();
}