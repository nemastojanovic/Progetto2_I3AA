#include "Arduino.h"
#include "Buzzer.h"

Potentiometer pot;

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale � collegato il buzzer.
*/

Buzzer::Buzzer(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
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
* Ritorna la frequenza che verr� applicata al buzzer
*/
void Buzzer::frequence(int range, int potValue)
{
	int frequence = range/1024*potValue;
	tone(_pin, frequence);
}


/**
* Setta la frequenza al buzzer all'inverso
*/
void Buzzer::setOnReverseBuzzerFrequenze(int range, int potValue){
	int frequence = range / 1024 * potValue;
	int reverse = 1024-frequence;
	tone(_pin, reverse);
}

