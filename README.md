#Arduino Light Sensor Library
A simple library for reading photoresistors.

##Example Sketch
0. Wire up a photoresistor to Arduino **pin A0**
0. Load the [example.ino](https://github.com/alextaujenis/LightSensor/blob/master/example/example.ino) onto your Arduino
0. Connect to the serial prompt at **115200 BAUD**
0. Watch a stream of the current light percentage

#Documentation

##Public Methods

* [constructor(pin)](https://github.com/alextaujenis/LightSensor#constructorpin)
* [getValue()](https://github.com/alextaujenis/LightSensor#getvalue)
* [getInverseValue()](https://github.com/alextaujenis/LightSensor#getinversevalue)
* [getPercentValue()](https://github.com/alextaujenis/LightSensor#getpercentvalue)
* [getInversePercentValue()](https://github.com/alextaujenis/LightSensor#getinversepercentvalue)

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

    #include <LightSensor.h>
    LightSensor light_sensor(A0);

##getValue()
Returns an integer from 0 - 1023 for the current light level.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.getValue();
    }

##getInverseValue()
Returns an integer from 1023 - 0 for the opposite of the current light level.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.getInverseValue();
    }

##getPercentValue()
Returns an integer from 0 - 100 for the current light level percentage.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.getPercentValue();
    }

##getInversePercentValue()
Returns an integer from 100 - 0 for the opposite of the current light level percentage.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.getInversePercentValue();
    }

#License
This code is available under the [MIT License](http://opensource.org/licenses/mit-license.php).