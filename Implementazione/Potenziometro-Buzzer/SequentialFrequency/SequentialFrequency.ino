// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
bool buttonState = 0;         // variable for reading the pushbutton status
bool Mode = 0;

 

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
if (!digitalRead(buttonPin)) 
  {
    if (!buttonState)
    {
      buttonState = true;
      Mode = !Mode; 
    }
  }
  else buttonState = false;
  digitalWrite(ledPin, Mode); 
}
