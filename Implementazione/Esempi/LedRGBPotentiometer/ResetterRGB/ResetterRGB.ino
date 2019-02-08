/* Includere la libreria del Buzzer */
#include <RGB.h>
/* Includere la libreria del potenziometro */
#include <potentiometer.h>

/* Includo la libreria del potenziometro */
Potentiometer pot(1);
/* Istanziare un oggetto di tipo rgb */
RGB rgb(0,1,4);


/*Metodo setup che viene avviato una volta sola all'inizio*/
void setup() {

}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  /* Prendo lo stato del potenziometro */
  int stato = pot.getValue();

  /*Setto il valore del potenziometro al metodo digitalRGB della libreria RGB*/
  rgb.resetterRGB(stato);
}
