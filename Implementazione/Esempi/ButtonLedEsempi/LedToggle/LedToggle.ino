/* Includo la libreria button */
#include <Button.h>
/* Includo la led button */
#include <Led.h>

/*Istanzio un oggetto di tipo led*/
Led led(1);
/*Istanzio un oggetto di tipo button*/
Button button(0);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  bool state = button.Button();
  led.toggle(state);
}
