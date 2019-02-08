/* Includo la libreria button */
#include <Button.h>
/* Includo la led button */
#include <Led.h>

/*Istanzio un oggetto di tipo led*/
Led led(1);
/*Istanzio un oggetto di tipo button*/
Button button(0);

/*Metodo setup che viene avviato una volta sola all'inizio*/
void setup() {

}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  /*Ritorna il valore del bottone*/
  int buttonState = button.getButtonValue();

  /*Setta il led con il pin del buttonState*/
  led.toggle(buttonState);
}
