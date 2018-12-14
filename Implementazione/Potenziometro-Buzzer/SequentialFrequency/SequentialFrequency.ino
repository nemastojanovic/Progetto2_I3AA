#include <Buzzer.h>
#include <potentiometer.h>



Buzzer buz; 
Potentiometer pot;

void setup()
{
  buz.Buzzer(8);
  pot.Potentiometer(A1);
}

void loop()
{
  buz.frequence(16000);
  buz.setOnBuzzerFrequenze();
}
