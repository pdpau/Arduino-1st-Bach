const int LEDPin = 13;
const int LDRPin = 2;
 
void setup()
{
pinMode(LEDPin, OUTPUT); 
pinMode(LDRPin, INPUT);
} 
 
void loop()
{
   int value = digitalRead(LDRPin);
   if (value == HIGH)
   {
      digitalWrite(LEDPin, HIGH);
      delay(50);
      digitalWrite(LEDPin, LOW);
      delay(50);
   }
}
