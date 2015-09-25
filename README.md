#Arduino Light Sensor Library
A simple library for reading photoresistors.

##Example Setup
0. Wire up a photoresistor to Arduino **pin A0**
0. Install this library and load the example sketch on to an Arduino
0. Open a serial connection at 115200 BAUD
0. Watch a stream of the current light percentage

##[example.ino](https://github.com/alextaujenis/RBD_LightSensor/blob/master/example/example.ino)

    #include <RBD_LightSensor.h>

    #define BAUD 115200
    RBD::LightSensor light_sensor(A0);

    void setup() {
      Serial.begin(BAUD);
    }

    void loop() {
      Serial.println(light_sensor.getPercentValue());
    }

#Documentation

##Public Methods

* [constructor(pin)](#constructorpin)
* [getValue()](#getvalue)
* [getInverseValue()](#getinversevalue)
* [getPercentValue()](#getpercentvalue)
* [getInversePercentValue()](#getinversepercentvalue)
* [setFloor()](#setfloor)
* [setCeiling()](#setceiling)

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

    RBD::LightSensor light_sensor(A0);

##getValue()
Returns an integer from 0 - 1023 for the current light level.

    light_sensor.getValue();

##getInverseValue()
Returns an integer from 1023 - 0 for the opposite of the current light level.

    light_sensor.getInverseValue();

##getPercentValue()
Returns an integer from 0 - 100 for the current light level percentage.

    light_sensor.getPercentValue();

##getInversePercentValue()
Returns an integer from 100 - 0 for the opposite of the current light level percentage.

    light_sensor.getInversePercentValue();

#License
This code is available under the [MIT License](http://opensource.org/licenses/mit-license.php).