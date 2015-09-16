// Arduino Light Sensor Example - Continuously print a light sensor reading
// Copyright 2015 Alex Taujenis
// MIT License

#include <RBD_LightSensor.h>

#define BAUD 115200
RBD::LightSensor light_sensor(A0);

void setup() {
  Serial.begin(BAUD);
}

void loop() {
  Serial.println(light_sensor.getPercentValue());
}