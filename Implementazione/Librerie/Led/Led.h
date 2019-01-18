#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led
{
private:
	int _pin;
public:
	void Led(int pin);
	void ledOn();
	void ledOff();
	void blink(int milliseconds);
	void toggle(int buttonPin);
	bool getState();
};

#endif
