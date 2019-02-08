#include "Arduino.h"
#include "Button.h"

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale è collegato il pulsante.
*/
Button::Button(int pin)
{
	pinMode(pin, INPUT);
	_pin = pin;
}

/*
* Metodo che ritorna il valore del oulsante
*/
bool Button::getButtonValue()
{
	//ritorno 1 se il bottone è premuto altrimenti 0
	if(digitalRead(_pin)){
		return true;
	}
	return false;
}

