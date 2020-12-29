/*Como usar el módulo Arduino LCD KeyPad Shieldcon el sensor de ultrasonidos HC-SR04Ideado por J. L. Ahedohttp://www.web-robotica.com/Este código es de dominio público,utilizalo y modificalo según tus necesidades*/

#include <LiquidCrystal.h> // Iniciamos la librería LiquidCrystal
// Inicializamos la libnrería con los números de los pines
// El módulo Arduino LCD KeyPad Shield
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int trigPin = 3;   // Elegimos el pin 3 para Trig
int echoPin = 11;  // Elegimos el pin 11 para Echo
long duration, cm; // Variables que utilizaremos


void setup() {
  
lcd.begin(16, 2);// set up the LCD's number of columns and rows:
lcd.print(" ");// Print a message to the LCD. 

pinMode(trigPin, OUTPUT);  //Definimos inputs y outputs
pinMode(echoPin, INPUT);
}

void loop() {
  
// El emisor se activa al recibir un impulso HIGH de 10 milisegundos.
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 

// La duración es el tiempo, en microsegundos que tarda la señal

duration = pulseIn(echoPin, HIGH);

// Convertimos el tiempo en distancia

cm = float (duration/2) *0.0343;

// Imprimimos el resultado en el módulo Arduino LCD KeyPad Shield

lcd.print("Distancia");

lcd.setCursor(0, 1);
lcd.print(cm);

lcd.setCursor(7, 1);
lcd.print("cm");

delay(500); 

lcd .clear ();
}
