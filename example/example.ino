#include <LightSensor.h>

#define BAUD 115200
LightSensor light_sensor(A0);

void setup() {
  Serial.begin(BAUD);
}

void loop() {
  Serial.println(light_sensor.percent());
}