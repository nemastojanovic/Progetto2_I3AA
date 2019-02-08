#ifndef Buzzer_h
#define Buzzer_h

#include "Arduino.h"

class Buzzer
{
private:
	int _pin;
public:
	void Buzzer(int pin);
	void setOnBuzzer();
	void setOffBuzzer();
	int frequence(int range);
	void setOnBuzzerFrequenze();
	void setOnReverseBuzzerFrequenze();
};

#endif
