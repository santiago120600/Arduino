// led RGB
int pinR = 11;
int pinG = 10;
int pinB = 9;

void setup() {
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);
}

void loop() {
  analogWrite(pinR, 0);
  analogWrite(pinG, 0);
  analogWrite(pinB, 250);
}
