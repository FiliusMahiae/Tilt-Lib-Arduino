#include <tiltLib.h>

/*This code checks if the tilt sensor conected in pin 8 isn't detecting tilt and returns in the Serial
the status false (there is tilt) or true (there is no tilt)*/

//Declaration of the sensor in pin 8
TILT tilt1(8);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(tilt1.tiltOn());
  delay(250);
}
