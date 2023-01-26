# Tilt-Lib-Arduino
The tiltLib is a very simple Arduino library that checks the status of a tilt sensor so you don't have to.
## Using the library
Using the library is very easy, and there are only a few functions to learn.
 * `TILT name(pin)` - Creates an instance of the class where **name** is a name you choose and **pin** is the pin the TILT is connected to.<br><hr>
 * `name.tiltStatus()` - Returns the status of the tilt sensor
 * `name.tiltOn()` - Returns `true` when the sensor is detecting tilt
 * `name.tiltOff()` - Returns `true` when the sensor is not detecting tilt
 <br>
 The tiltLib example include separate examples of each function.
