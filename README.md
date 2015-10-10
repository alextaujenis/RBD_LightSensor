#Arduino Light Sensor Library
Read and calibrate photoresistors.

##Example Setup
0. Wire up a photoresistor to Arduino pin A0
0. Install this library and load the example sketch on to an Arduino
0. Open a serial connection at 115200 BAUD
0. Watch a stream of the current light percentage

**Example Sketch**

    #include <RBD_LightSensor.h>

    RBD::LightSensor light_sensor(A0);

    void setup() {
      Serial.begin(115200);
    }

    void loop() {
      Serial.println(light_sensor.getPercentValue());
    }

#Documentation

##Public Methods

* [constructor(pin)](#constructorpin)
<hr />
* [setFloor()](#setfloorvalue)
* [setCeiling()](#setceilingvalue)
* [resetFloor()](#resetfloor)
* [resetCeiling()](#resetceiling)
<hr />
* [getValue()](#getvalue)
* [getInverseValue()](#getinversevalue)
* [getPercentValue()](#getpercentvalue)
* [getInversePercentValue()](#getinversepercentvalue)

##constructor(pin)
Create a new sensor and pass in the Arduino pin number.

    RBD::LightSensor light_sensor(A0);

    void setup() {
      ...
    }

##setFloor(value)
Provide an integer from 0 - 1023 to calibrate the sensor with a lower bounds of light detection. This will adjust the scale for all methods that return a value in this library, but will not adjust their documented output range. Calibrate the floor with help from [getRawValue()](#getrawvalue).

    void setup() {
      light_sensor.setFloor(10);
    }

##setCeiling(value)
Provide an integer from 0 - 1023 to calibrate the sensor with an upper bounds of light detection. This will adjust the scale for all methods that return a value in this library, but will not adjust their documented output range. Calibrate the ceiling with help from [getRawValue()](#getrawvalue).

    void setup() {
      light_sensor.setCeiling(999);
    }

##resetFloor()
Change the [setFloor()](#setfloorvalue) value back to 0, which also resets the lower bounds of the scale for all methods that return a value in this library.

    void setup() {
      light_sensor.resetFloor();
    }

##resetCeiling()
Change the [setCeiling()](#setceilingvalue) value back to 1023, which also resets the upper bounds of the scale for all methods that return a value in this library.

    void setup() {
      light_sensor.resetCeiling();
    }

##getValue()
Returns an integer from 0 - 1023 for the current light level adjusted for the [setFloor()](#setfloorvalue) and [setCeiling()](#setceilingvalue) values. If the floor or ceiling are not set, this method will return [getRawValue()](#getrawvalue).

    void loop() {
      light_sensor.getValue();
    }

##getRawValue()
Returns an integer from 0 - 1023 for the current light level reading from the sensor. Use this method to calibrate [setFloor()](#setfloorvalue) and [setCeiling()](#setceilingvalue).

    void loop() {
      light_sensor.getRawValue();
    }

##getInverseValue()
Returns an integer from 1023 - 0 for the opposite of the current light level.

    void loop() {
      light_sensor.getInverseValue();
    }

##getPercentValue()
Returns an integer from 0 - 100 for the current light percentage.

    void loop() {
      light_sensor.getPercentValue();
    }

##getInversePercentValue()
Returns an integer from 100 - 0 for the opposite of the current light percentage.

    void loop() {
      light_sensor.getInversePercentValue();
    }

#License
This code is available under the [MIT License](http://opensource.org/licenses/mit-license.php).