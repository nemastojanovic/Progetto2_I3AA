#include "Arduino.h"
#include "Led.h"

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale è collegato il Led.
*/

Led::Led(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}


/**
* Metodo che ritorna lo stato del led
*/
bool Led::getState()
{
	return digitalRead(_pin);
}

/**
* Metodo che accende il led
*/
void Led::ledOn()
{
	digitalWrite(_pin, HIGH);	
}


/**
* Metodo che spegne il led
*/
void Led::ledOff()
{
	digitalWrite(_pin, LOW);
}


/**
* Metodo che fa lampeggiare il Led con la velocità in base al parametro
*/
void Led::blink(int milliseconds)
{
	while(true){
		digitalWrite(_pin, HIGH);
		delay(milliseconds);
		digitalWrite(_pin, LOW);
		delay(milliseconds);
	}
		
}

/*
* Metodo che setta il valore led in base allo stato del parametro (HIGH O LOW)
*/
void Led::setLed(bool stato)
{
	digitalWrite(_pin, stato);
};




