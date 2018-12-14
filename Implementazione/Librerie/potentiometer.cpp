/**
 * @author thordublin
 * @version 14.12.2018
 */
#include "Arduino.h"
#include "Potentiometer.h"


Potentiometer::Potentiometer(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}


int Potentiometer::getValue()
{
  int analog = analogRead(_pin);
  return analog;
}




