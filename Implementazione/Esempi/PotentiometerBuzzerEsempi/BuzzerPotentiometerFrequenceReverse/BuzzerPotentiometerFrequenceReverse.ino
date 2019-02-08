/* Includere la libreria del Buzzer */
#include <Buzzer.h>
/* Includere la libreria del Buzzer */
#include <potentiometer.h>

/* Includo la libreria del Buzzer */
Potentiometer pot(1);
/* Istanziare un oggetto di tipo Buzzer */
Buzzer buzzer(2);

/*Setta il range*/
int range= 16000; 

/*Metodo setup che viene avviato una volta sola all'inizio*/
void setup() {
}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  /* Prendo lo stato del potenziometro */
  int stato = pot.getValue();

  /*Setto il range e lo stato del potenziometro che 
  *poi mi setta la frequenza al buzzer all'inverso*/
  buzzer.setOnReverseBuzzerFrequenze(range, stato);
}
