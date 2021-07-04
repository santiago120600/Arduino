// led RGB
int pinR = 11;
int pinG = 10;
int pinB = 9;
// fotoresistencias
int pinLDR_01 = 4;
int pinLDR_02 = 5;
int pinLDR_03 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);
}

void loop() {
  // leer fotoresistencias
  float valueR = analogRead(pinLDR_01);
  int val_red = map(valueR,0,1023,0,255);
  Serial.print("valor R ");
  Serial.println(val_red);
  delay(1000);
  float valueG = analogRead(pinLDR_02);
  int val_green = map(valueG,0,1023,0,255);
  Serial.print("valor G ");
  Serial.println(val_green);
  delay(1000);
  float valueB = analogRead(pinLDR_03);
  int val_blue = map(valueB,0,1023,0,255);
  Serial.print("valor B ");
  Serial.println(val_blue);
  delay(1000);
  led_rgb(val_red,val_green,val_blue); 
}

void led_rgb(int red,int green,int blue)
{
  // controlar los colores RGB
  analogWrite(pinR, red);
  analogWrite(pinG, green);
  analogWrite(pinB, blue);
}
