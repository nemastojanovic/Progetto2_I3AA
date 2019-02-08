/**
 * @author thordublin
 * @version 14.12.2018
 */
#include "Arduino.h"
#include "Potentiometer.h"

 /**
 * Metodo costruttore con un parametro.
 * @param pin Il pin al quale è collegato il Potenziometro.
 */
Potentiometer::Potentiometer(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}

/*
* Metodo che ritorna il valore del potenziometro
*/
int Potentiometer::getValue()
{
  int analog = analogRead(_pin);
  return analog;
}




