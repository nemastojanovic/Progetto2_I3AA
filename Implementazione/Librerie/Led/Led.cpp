#include "Arduino.h"
#include "Led.h"

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale � collegato il Led.
*/

Led::Led(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

bool Led::getState()
{
	return digitalRead(_pin);
}

void Led::ledOn()
{
	digitalWrite(_pin, HIGH);	
}


void Led::ledOff()
{
	digitalWrite(_pin, LOW);
}

void Led::blink(int milliseconds)
{
	while(true){
		digitalWrite(_pin, HIGH);
		delay(milliseconds);
		digitalWrite(_pin, LOW);
		delay(milliseconds);
	}
		
}

void Led::toggle(int buttonPin)
{
	bool mode = 0;
	bool buttonState = 0;
	
	if (!digitalRead(buttonPin)){
	    if (!buttonState) {
	      buttonState = true;
	      Mode = !Mode;
	    }else{
	      buttonState = false;
	    }
	    digitalWrite(_pin, Mode); 
	    delay(5);
	}
}


