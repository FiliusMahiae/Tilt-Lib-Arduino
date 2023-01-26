#include <tiltLib.h>

/*This code checks if the tilt sensor conected in pin 8 is detecting tilt and returns in the Serial
the status true (there is tilt) or false (there is no tilt)*/

//Declaration of the sensor in pin 8
TILT tilt1(8);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(tilt1.tiltOn());
  delay(250);
}
