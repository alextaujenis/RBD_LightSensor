// Arduino RBD Light Sensor Library v1.0.4 - Read and calibrate photoresistors.
// https://github.com/alextaujenis/RBD_LightSensor
// Copyright (c) 2015 Alex Taujenis - MIT License

#ifndef RBD_LIGHT_SENSOR_H
#define RBD_LIGHT_SENSOR_H

#include <Arduino.h>

namespace RBD {
  class LightSensor {
    public:
      LightSensor(int pin);
      int getValue();
      int getRawValue();
      int getInverseValue();
      int getPercentValue();
      int getInversePercentValue();
      void setFloor(int value);
      void setCeiling(int value);
      void resetFloor();
      void resetCeiling();
    private:
      int _pin;
      int _floor      = 0;
      int _ceiling    = 1023;
      bool _constrain = false;
  };
}
#endif