#include<Servo.h>
Servo servo;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    servo.attach(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
  // valor maximo de 180(grados)
  servo.write(90);
}
