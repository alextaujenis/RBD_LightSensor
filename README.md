#Arduino Light Sensor Library
A simple library for reading photoresistors.

##Example Setup
0. Wire up a photoresistor to Arduino **pin A0**
0. Install this library and load the example sketch on to an Arduino
0. Open a serial connection at 115200 BAUD
0. Watch a stream of the current light percentage

##[example.ino](https://github.com/alextaujenis/LightSensor/blob/master/example/example.ino)

    #include <LightSensor.h>

    #define BAUD 115200
    LightSensor light_sensor(A0);

    void setup() {
      Serial.begin(BAUD);
    }

    void loop() {
      Serial.println(light_sensor.getPercentValue());
    }

#Documentation

##Public Methods

* [constructor(pin)](https://github.com/alextaujenis/LightSensor#constructorpin)
* [getValue()](https://github.com/alextaujenis/LightSensor#getvalue)
* [getInverseValue()](https://github.com/alextaujenis/LightSensor#getinversevalue)
* [getPercentValue()](https://github.com/alextaujenis/LightSensor#getpercentvalue)
* [getInversePercentValue()](https://github.com/alextaujenis/LightSensor#getinversepercentvalue)

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

##getValue()
Returns an integer from 0 - 1023 for the current light level.

##getInverseValue()
Returns an integer from 1023 - 0 for the opposite of the current light level.

##getPercentValue()
Returns an integer from 0 - 100 for the current light level percentage.

##getInversePercentValue()
Returns an integer from 100 - 0 for the opposite of the current light level percentage.

#License
This code is available under the [MIT License](http://opensource.org/licenses/mit-license.php).