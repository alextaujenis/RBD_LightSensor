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
* [value()](https://github.com/alextaujenis/LightSensor#value)
* [percent()](https://github.com/alextaujenis/LightSensor#percent)
* [inverseValue()](https://github.com/alextaujenis/LightSensor#inversevalue)
* [inversePercent()](https://github.com/alextaujenis/LightSensor#inversepercent)

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

    #include <LightSensor.h>
    LightSensor light_sensor(A0);

##value()
Returns an integer from 0 - 1023 for the current light level.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.value();
    }

##percent()
Returns an integer from 0 - 100 for the current light level percentage.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.percent();
    }

##inverseValue()
Returns an integer from 1023 - 0 for the opposite of the current light level.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.inverseValue();
    }

##inversePercent()
Returns an integer from 100 - 0 for the opposite of the current light level percentage.

    #include <LightSensor.h>

    LightSensor light_sensor(A0);

    void loop() {
      light_sensor.inversePercent();
    }

#License
This code is available under the [MIT License](http://opensource.org/licenses/mit-license.php).