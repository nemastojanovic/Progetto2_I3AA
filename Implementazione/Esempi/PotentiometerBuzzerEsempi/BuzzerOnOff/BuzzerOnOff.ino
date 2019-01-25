#include <Buzzer.h>
#include <potentiometer.h>


Potentiometer pot(1);
Buzzer buzzer(2);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int stato = pot.getValue();
  
  if(stato < 500){
    buzzer.setOffBuzzer();
  }else{
    buzzer.setOnBuzzer();
  }
}
