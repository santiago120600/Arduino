int led_1 = 12; 
int led_2 = 6;
int led_3 = 2;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  digitalWrite(led_1, HIGH);
  delay(2000);  
  digitalWrite(led_1, LOW);
  delay(2000);  
  digitalWrite(led_2, HIGH);
  delay(2000);
  digitalWrite(led_2, LOW);
  delay(2000);  
  digitalWrite(led_3, HIGH);
  delay(2000);
  digitalWrite(led_3, LOW);
  delay(2000);  
}
