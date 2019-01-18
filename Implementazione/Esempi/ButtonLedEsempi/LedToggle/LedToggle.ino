/* Includo la libreria button */
#include <Button.h>
/* Includo la led button */
#include <Led.h>

Led led(1);

Button button(0);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  bool mode = 0;
  bool buttonState = 0;

  bool state = button.getButtonValue();
  bool ledstate = led.getState();

  
  
  if (!digitalRead(state)){
      if (!buttonState) {
        buttonState = true;
        mode = !mode;
      }else{
        buttonState = false;
      }
      digitalWrite(ledstate, mode); 
      delay(5);
  }
}
