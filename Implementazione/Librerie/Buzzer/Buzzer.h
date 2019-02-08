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
	void frequence(int range, int potValue);
	void setOnReverseBuzzerFrequenze(int range, int potValue);
};

#endif
