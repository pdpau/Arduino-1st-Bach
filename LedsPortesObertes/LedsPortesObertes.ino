int donut = 0;
const int Trigger = 6;   //Pin digital 2 para el Trigger del sensor
const int Echo = 5;   //Pin digital 3 para el Echo del sensor
const int Led1 = 8;
const int Led2 = 9;
const int Led3 = 10;
const int Led4 = 11;



void setup() {
  Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
  }

void loop()
  {
    
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100ms
  
  if (d < 15 and donut < 2) {
    
    digitalWrite(Led1, HIGH);
    delay(100);
    digitalWrite(Led1, LOW);
    delay(100);
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    delay(100);
    digitalWrite(Led2, LOW);
    delay(100);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    delay(100);
    digitalWrite(Led3, LOW);
    delay(100);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    delay(100);
    digitalWrite(Led4, LOW);
    delay(100);
    digitalWrite(Led4, HIGH);
    donut = donut + 1; // sumar 1 al contador 
  }
    
  else{
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
  }
  
  if(d > 15){
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    donut = 0;
  }
  

  delay(100);
}
