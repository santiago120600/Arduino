#include <Servo.h> // Incluimos la biblioteca Servo

Servo servo;  // Definimos los servos que vamos a utilizar

int potenciometro = 0;  // Pin usado para conectar el potenciómeto
int valor_potenciometro;    // Esta variable definirá la posición del servo

void setup() {
  Serial.begin(9600);
  servo.attach(A2);  // Difinimos el pines de señal para el servo
}

void loop() {
  valor_potenciometro = analogRead(potenciometro);
  // leemose valor del potenciometro (valor entre 0 y 1023)
  valor_potenciometro = map(valor_potenciometro, 0, 1023, 0, 180);
  // valor proporcional a la escala del servomotor (valor entre 0 y 180)
  servo.write(valor_potenciometro);
  Serial.println(valor_potenciometro);
  delay(10);
  //
}
