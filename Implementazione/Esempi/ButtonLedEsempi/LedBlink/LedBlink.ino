/* Includo la led button */
#include <Led.h>

/*Istanzio un oggetto di tipo button*/
Led led(1);

/*Metodo setup che viene avviato una volta sola all'inizio*/
void setup() {
}

/*Variabile millisecondi che specifica ogni 
 *quanto bisogna fare il blink del led
 */
int milliseconds = 1000;

/*Metodo loop che viene richiamato all'infinito*/
void loop() {
    /*Ritorna il valroe del led*/
    bool ledstate = led.getState();

    /*Se il led è acceso allora lo fa blinkare
     *ogni (milliseconds), sennò spegne il led 
     */
    if(ledstate == HIGH){
      led.blink(milliseconds);
    }else{
      led.ledOff();  
    }
}
