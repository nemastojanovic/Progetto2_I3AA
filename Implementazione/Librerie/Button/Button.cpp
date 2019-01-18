#include "Arduino.h"
#include "Button.h"

Button::Button(int pin)
{
	pinMode(pin, INPUT);
	_pin = pin;
}

bool Button::getButtonValue()
{
	//ritorno 1 se il bottone è premuto altrimenti 0
	if(digitalRead(_pin)){
		return true;
	}
	return false;
}
