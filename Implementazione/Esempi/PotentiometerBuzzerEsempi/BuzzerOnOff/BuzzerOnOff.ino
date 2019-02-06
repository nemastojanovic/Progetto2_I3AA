/* Includere la libreria del Buzzer */
#include <Buzzer.h>
/* Includere la libreria del Buzzer */
#include <potentiometer.h>

/* Istanziare un oggetto di tipo Potentiometer */
Potentiometer pot(1);
/* Istanziare un oggetto di tipo Buzzer */
Buzzer buzzer(2);

/*Metodo setup che viene avviato solo all'inizio*/
void setup() {
}

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
  
  /*Ritorna il valore del potenziometro*/ 
  int stato = pot.getValue();

  /*Se il valore del potenziometro è minore di 500 spegne 
   *il Buzzer e se invece è maggiore lo accende
   */
  if(stato < 500){
    buzzer.setOffBuzzer();
  }else{
    buzzer.setOnBuzzer();
  }
}
