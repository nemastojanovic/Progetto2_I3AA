#ifndef RGB_h
#define RGB_h

#include "Arduino.h"

class RGB
{
private:
	int _pinR;
	int _pinG;
	int _pinB;
public:
	void RGB(int pinR, int pinG, int pinB);
	void digitalRGB();
	void analogRGB();
	void resetterRGB();
};

#endif
