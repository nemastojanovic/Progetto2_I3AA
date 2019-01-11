#import "Arduino.h"
#include "Buzzer.h"
#include "potentiometer.h"

Potentiometer pot;

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale è collegato il buzzer.
*/

Buzzer::Buzzer(int pin)
{
	_pin = pin;
	pinMode(pin, OUTPUT);
}

/**
* Metodo che provoca il suono 
*/
int Buzzer::setOnBuzzer()
{
	digitalWrite(_pin, HIGH);	
}


/**
* Metodo che spegne il suono
*/
int Buzzer::setOffBuzzer()
{
	digitalWrite(_pin, LOW);
}

/**
* Ritorna la frequenza che verrà applicata al buzzer
*/
int Buzzer::frequence(int range)
{
	int frequence = range/1024*pot.getValue();
	return frequence;
}


/**
* Setta la frequenza al buzzer
*/
void Buzzer::setOnBuzzerFrequenze() {
	tone(_pin, frequence());
}



