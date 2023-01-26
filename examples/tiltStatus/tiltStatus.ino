#include <tiltLib.h>

/*This code checks the status of the tilt sensor conected in pin 8 is detecting tilt and returns it in the
Serial Monitor: tilt(1) or no tilt (0)*/

//Declaration of the sensor in pin 8
TILT tilt1(8);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(tilt1.tiltOn());
  delay(250);
}
