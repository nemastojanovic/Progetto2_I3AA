/**
 * @author thordublin
 * @version 14.12.2018
 */
 #ifndef Potentiometer_h
 #define Potentiometer_h
 #include "Arduino.h"

 class Potentiometer
 {
   public:
     Potentiometer(int pin);
     int getValue();
   private:
     int _pin;
 };

 #endif
