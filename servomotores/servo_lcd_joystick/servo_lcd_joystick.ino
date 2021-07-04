#include <LiquidCrystal.h>
#include<Servo.h>
Servo servo;
// Eje x joystck
const int pinJoyX = A0;
// LCD
const int RS = 11, EN = 12, D4 = 2, D5 = 3, D6 = 4, D7 = 5;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
// variable para angulo
int AnguloServo;
int Xvalue;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2); // set up number of columns and rows
  servo.attach(A2);
}

void loop() {
  Xvalue = analogRead(pinJoyX);
  AnguloServo = map(Xvalue, 0, 1023, 0, 180);
  // valor proporcional a la escala del servomotor (valor entre 0 y 180)
  servo.write(AnguloServo);
  lcd.setCursor(0,0);
  lcd.print(AnguloServo);
  Serial.println(AnguloServo);
  delay(15);
}
