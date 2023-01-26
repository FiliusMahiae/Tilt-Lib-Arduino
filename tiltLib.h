/* Tilt Library
 
Copyright 2023 FiliusMahiae

This library checks the digital status of a tilt sensor, it can also send
boolean values when wanting to check if the tilt sensor is detecting tilt or not.

Esta libreria detecta el estado en una entrada digital de un sensor de inclinacion, tambien
puede mandar valores booleanos cuando se queire comprobar si el sensor esta detectando inclinacion o no.

*/

#ifndef TILTLIB_H
#define TILTLIB_H

#include <Arduino.h>

class TILT {

  private:
    int tiltPin;

  public:
    TILT(int pin);
    int tiltStatus();
    bool tiltOff();
    bool tiltOn();

};

#endif