/* Includo la led button */
#include <Led.h>

Led led(1);

void setup() {
  // put your setup code here, to run once:
}

int milliseconds = 1000;

void loop() {
    bool ledstate = led.getState();
    
    while(true){
      digitalWrite(ledstate, HIGH);
      delay(milliseconds);
      digitalWrite(ledstate, LOW);
      delay(milliseconds);
    }
}
