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
    /* Prendo lo stato del bottone */
  bool state = button.getButtonValue();
  /* Se il bottone è premuto lo accendo, sennò lo spengo. */
  if(state) {
    led.ledOn();
  } else {
    led.ledOff();
  }
}
