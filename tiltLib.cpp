/* Tilt Library
 
Copyright 2023 FiliusMahiae

This library checks the digital status of a tilt sensor, it can also send
boolean values when wanting to check if the tilt sensor is detecting tilt or not.

Esta libreria detecta el estado en una entrada digital de un sensor de inclinacion, tambien
puede mandar valores booleanos cuando se queire comprobar si el sensor esta detectando inclinacion o no.

*/

#include "tiltLib.h"

TILT::TILT(int pin) {
  tiltPin = pin;
  pinMode(tiltPin, INPUT);
}

bool TILT::tiltOff(){
  if(digitalRead(tiltPin)==1){
    return true;
  }else{
    return false;
  }
}

bool TILT::tiltOn(){
  if(digitalRead(tiltPin)==0){
    return true;
  }else{
    return false;
  }
}

int TILT::tiltStatus(){
  return digitalRead(tiltPin);
}