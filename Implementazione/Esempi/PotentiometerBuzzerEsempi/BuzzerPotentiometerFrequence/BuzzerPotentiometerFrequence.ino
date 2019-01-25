#include <Buzzer.h>
#include <potentiometer.h>


Potentiometer pot(1);
Buzzer buzzer(2);

int range= 16000; 

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int stato = pot.getValue();
  
  int frequenza = range / 1024 * stato; 

  buzzer.setOnBuzzerFrequenze(frequenza);
}
