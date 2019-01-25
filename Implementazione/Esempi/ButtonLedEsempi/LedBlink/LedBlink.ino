 /* Includo la led button */
#include <Led.h>

Led led(1);

void setup() {
  // put your setup code here, to run once:
}

int milliseconds = 1000;

void loop() {
    bool ledstate = led.getState();
    
    if(ledstate == HIGH){
      led.blink(milliseconds);
    }else{
      led.ledOff();  
    }
}
