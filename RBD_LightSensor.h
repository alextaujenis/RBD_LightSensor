// Arduino RBD Light Sensor Library - A simple library for reading photoresistors
// Copyright 2015 Alex Taujenis
// MIT License

#ifndef RBD_LIGHT_SENSOR_H
#define RBD_LIGHT_SENSOR_H

#include <Arduino.h>

namespace RBD {
  class LightSensor {
    public:
      LightSensor(int pint);
      int getValue();               // 0 - 1023
      int getInverseValue();        // 1023 - 0
      int getPercentValue();        // 0 - 100
      int getInversePercentValue(); // 100 - 0
    private:
      int _pin;
  };
}
#endif