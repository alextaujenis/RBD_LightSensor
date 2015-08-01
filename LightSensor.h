#ifndef LIGHT_SENSOR_H
#define LIGHT_SENSOR_H

#include <Arduino.h>

class LightSensor {
  public:
    LightSensor(int pint);
    int value();   // 0 - 1023
    int percent(); // 0 - 100
  private:
    int _pin;
};

#endif