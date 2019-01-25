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
  bool state = button.getButtonValue();
  button.toggle(state);
}
