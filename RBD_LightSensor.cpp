// Arduino RBD Light Sensor Library - A simple library for reading photoresistors
// Copyright 2015 Alex Taujenis
// MIT License

#include <Arduino.h>
#include <RBD_LightSensor.h>

namespace RBD {
  LightSensor::LightSensor(int pin) {
    _pin = pin;
  }

  int LightSensor::getValue() {  // range: 0 - 1023
    return analogRead(_pin);
  }

  int LightSensor::getInverseValue() {  // range: 1023 - 0
    return 1023 - getValue();
  }

  int LightSensor::getPercentValue() { // range: 0 - 100
    return int(getValue() / 1023.0 * 100);
  }

  int LightSensor::getInversePercentValue() { // range: 100 - 0
    return 100 - getPercentValue();
  }
}