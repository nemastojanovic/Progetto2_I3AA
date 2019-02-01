#include "Arduino.h"
#include "RGB.h"
#include "potentiometer.h"

Potentiometer pot;

/**
* Metodo costruttore con un parametro.
* @param pin Il pin al quale è collegato il Led.
*/

RGB::RGB(int pinR, int pinG, int pinB)
{
	pinMode(pinR, OUTPUT);
	pinMode(pinG, OUTPUT);
	pinMode(pinB, OUTPUT);
	_pinR = pinR;
	_pinG = pinG;
	_pinB = pinB;
}

void RGB::digitalRGB()
{
	int val = pot.getValue();
	if(val > 850){
	    digitalWrite(_pinR, LOW);
	    digitalWrite(_pinG, HIGH);
	    digitalWrite(_pinB, HIGH);
  	}else if(val > 680){
    	digitalWrite(_pinR, LOW);
	    digitalWrite(_pinG, LOW);
	    digitalWrite(_pinB, HIGH);
  	}else if(val > 510){
	    digitalWrite(_pinR, HIGH);
	    digitalWrite(_pinG, LOW);
	    digitalWrite(_pinB, HIGH);
  	}else if(val > 340){
	    digitalWrite(_pinR, HIGH);
	    digitalWrite(_pinG, LOW);
	    digitalWrite(_pinB, LOW);
  	}else if(val > 170){
	    digitalWrite(_pinR, HIGH);
	    digitalWrite(_pinG, HIGH);
	    digitalWrite(_pinB, LOW);
  	}else{
	    digitalWrite(_pinR, LOW);
	    digitalWrite(_pinG, LOW);
	    digitalWrite(_pinB, LOW);
  	}
}

void RGB::analogRGB()
{
	int val = pot.getValue();
	if(val > 854){
	    intensity = map(val-854,0,170,255,0);
	    analogWrite(redPin, 0);
	    analogWrite(greenPin, 255-intensity);
	    analogWrite(bluePin, 255);
  	}else if(val > 680){
	    intensity = map(val-680,0,170,255,0);
	    analogWrite(redPin, intensity);
	    analogWrite(greenPin, 0);
	    analogWrite(bluePin, 255);
  	}else if(val > 510){
	    intensity = map(val-510,0,170,255,0);
	    analogWrite(redPin, 255);
	    analogWrite(greenPin, 0);
	    analogWrite(bluePin, 255-intensity);
  	}else if(val > 340){
	    intensity = map(val-340,0,170,255,0);
	    analogWrite(redPin, 255);
	    analogWrite(greenPin, intensity);
	    analogWrite(bluePin, 0);
  	}else if(val > 170){
	    intensity = map(val-170,0,170,255,0);
	    analogWrite(redPin, 255-intensity);
	    analogWrite(greenPin, 255);
	    analogWrite(bluePin, 0);
  	}else{
	    intensity = map(val,0,170,255,0);
	    analogWrite(redPin, 0);
	    analogWrite(greenPin, 255-intensity);
	    analogWrite(bluePin, 0);
  	}		
}

void RGB::resetterRGB()
{
	bool maxed = false;
	int reset = 0;
	
	int intensity = 0;
	int val = pot.getValue();
	
	if(val > 1000){
    	maxed = true;
  	}
  	if(maxed && val < 2){
    	reset++;
    	maxed = false;
  	}
  	if(reset%4 == 0){
    	intensity = map(val,0,1023,255,0);
    	analogWrite(redPin, intensity);
    	analogWrite(greenPin, intensity);
    	analogWrite(bluePin, intensity);
  	}else if(reset%4 == 1){
    	intensity = map(val,0,1023,255,0);
    	analogWrite(redPin, intensity);
    	analogWrite(greenPin, 255);
    	analogWrite(bluePin, 255);
  	}else if(reset%4 == 2){
    	intensity = map(val,0,1023,255,0);
    	analogWrite(redPin, 255);
    	analogWrite(greenPin, intensity);
    	analogWrite(bluePin, 255);
  	}else if(reset%4 == 3){
    	intensity = map(val,0,1023,255,0);
    	analogWrite(redPin, 255);
    	analogWrite(greenPin, 255);
    	analogWrite(bluePin, intensity);
  	}
	
}


