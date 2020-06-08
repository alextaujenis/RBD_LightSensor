// Arduino RBD Light Sensor Library v1.0.4 - Read and calibrate photoresistors.
// https://github.com/alextaujenis/RBD_LightSensor
// Copyright (c) 2015 Alex Taujenis - MIT License

#include <Arduino.h>
#include <RBD_LightSensor.h>

namespace RBD {
  LightSensor::LightSensor(int pin) {
    _pin = pin;
    pinMode(_pin, INPUT);
  }

  int LightSensor::getValue() {
    if(_constrain) {
      return constrain(map(getRawValue(), _floor, _ceiling, 0, 1023), 0, 1023);
    }
    else {
      return getRawValue();
    }
  }

  int LightSensor::getRawValue() {
    return analogRead(_pin);
  }

  int LightSensor::getInverseValue() {
    return 1023 - getValue();
  }

  int LightSensor::getPercentValue() {
    return int(getValue() / 1023.0 * 100);
  }

  int LightSensor::getInversePercentValue() {
    return 100 - getPercentValue();
  }

  void LightSensor::setFloor(int value) {
    if(value > -1 && value < 1024) {
      _floor = value;

      if(_floor != 0) {
        _constrain = true;
      }
      else if(_ceiling == 1023) {
        _constrain = false;
      }
    }
  }

  void LightSensor::setCeiling(int value) {
    if(value > -1 && value < 1024) {
      _ceiling = value;

      if(_ceiling != 1023) {
        _constrain = true;
      }
      else if(_floor == 0) {
        _constrain = false;
      }
    }
  }

  void LightSensor::resetFloor() {
    setFloor(0);
  }

  void LightSensor::resetCeiling() {
    setCeiling(1023);
  }
}