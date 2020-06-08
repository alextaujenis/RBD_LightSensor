// Arduino RBD Light Sensor Library v1.0.4 Example - Continuously print a light sensor reading.
// https://github.com/alextaujenis/RBD_LightSensor
// Copyright (c) 2015 Alex Taujenis - MIT License

#include <RBD_LightSensor.h>

RBD::LightSensor light_sensor(A0);

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(light_sensor.getPercentValue());
}