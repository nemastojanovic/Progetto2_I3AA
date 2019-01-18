#ifndef Button_h
#define Button_h

#include "Arduino.h"

class Button
{
private:
	int _pin;
public:
	void Button(int pin);
	bool getButtonValue();
};

#endif
