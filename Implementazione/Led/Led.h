#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led
{
private:
	int _pin;
public:
	void Led(int pin);
	int getLedValue();
	void ledOn();
	void ledOff();
	void blink(int milliseconds);
	void Ltoggle(int buttonPin);
};

#endif
