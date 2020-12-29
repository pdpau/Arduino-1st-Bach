/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int verde = 13;
int rojo = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(verde, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);  // wait for a second
  digitalWrite(verde, LOW);
  digitalWrite(rojo, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);   // wait for a second
  digitalWrite(rojo, LOW);
}
