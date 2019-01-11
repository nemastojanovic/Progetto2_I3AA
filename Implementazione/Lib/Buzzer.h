#ifndef Buzzer_h
#define Buzzer_h

#include "Arduino.h"

class Buzzer
{

public:
	int _pin;
	Buzzer(int);
	void setOnBuzzer();
	void setOffBuzzer();
	int frequence(int);
	void setOnBuzzerFrequenze();
};

#endif