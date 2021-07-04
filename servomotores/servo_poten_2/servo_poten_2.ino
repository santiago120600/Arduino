#include<Servo.h> //libreria del servo
Servo servo1; //Nombre del servo

int const enpot= A0; //enpot = entrada del potenciometro
int Poten; // variable potenciometro
int AnguloServo;


void setup() 
{
  servo1.attach(9); //usar entrada 9  PWM(ancho de pulso)
  Serial.begin(9600); //hace referencia a la velocidad en milisegundos (monitor serie)
}

void loop() 
{
  Poten = analogRead(enpot);
  Serial.print("Posicion del potenciometro: ");
  Serial.print(Poten);
  AnguloServo = map(Poten, 0, 1023, 0, 179); // numero que se va a combertir, valor minimo, valor maximo, valor minimo convertido, valor maximo convertido
  Serial.print(", Angulo Servo: ");
  Serial.println(AnguloServo);
  servo1.write(AnguloServo); //para que lo haga
  delay(100); //darle tiempo
}
