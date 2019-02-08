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
  // put your setup code here, to run once:
}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  /*Ritorna il valore del bottone con il toggle*/
  bool state = button.toggle();

  /*Setta il led in base al valore ricevuto dal toggle*/
  led.setLed(state);
}
