/* Includere la libreria del Buzzer */
#include <Buzzer.h>
/* Includere la libreria del Buzzer */
#include <potentiometer.h>

/* Includo la libreria del Buzzer */
Potentiometer pot(1);
/* Istanziare un oggetto di tipo Buzzer */
Buzzer buzzer(2);

/**/
int range= 16000; 

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int stato = pot.getValue();
  
  int frequenza = range / 1024 * stato; 

  buzzer.setOnBuzzerFrequenze(frequenza);
}
