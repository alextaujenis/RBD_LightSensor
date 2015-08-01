// Arduino Light Sensor Library - A simple library for photoresistors
// Copyright 2015 Alex Taujenis
// MIT License

#ifndef LIGHT_SENSOR_H
#define LIGHT_SENSOR_H

#include <Arduino.h>

class LightSensor {
  public:
    LightSensor(int pint);
    int value();          // 0 - 1023
    int percent();        // 0 - 100
    int inverseValue();   // 1023 - 0
    int inversePercent(); // 100 - 0
  private:
    int _pin;
};

#endif