#Arduino Light Sensor Library
A simple library for photoresistors.

#Documentation

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

    #include <LightSensor.h>
    LightSensor light_sensor(A0);

##value()
Returns an integer from 0 - 1023 for the current light level.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      Serial.println(light_sensor.value());
    }

##percent()
Returns an integer from 0 - 100 for the current light level percentage.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      Serial.println(light_sensor.percent());
    }

#License
This code is avaliable under the [MIT License](http://opensource.org/licenses/mit-license.php).