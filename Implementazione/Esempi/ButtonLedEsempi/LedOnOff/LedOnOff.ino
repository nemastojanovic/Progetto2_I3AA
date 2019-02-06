/* Include la libreria del buttone */
#include <Button.h>
/* Include la libreria del led */
#include <Led.h>

/*Istanzia un oggetto di tipo led*/
Led led(1);
/*Istanzia un oggetto di tipo button*/
Button button(0);

/*Metodo setup che viene avviato una volta sola all'inizio*/
void setup() {

}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  /* Prendo lo stato del bottone */
  bool state = button.getButtonValue();
 
  /* Se il bottone è premuto viene acceso, sennò viene spento. */
  if(state) {
    led.ledOn();
  } else {
    led.ledOff();
  }
}
