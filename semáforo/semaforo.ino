int led_1 = 12; 
int led_2 = 6;
int led_3 = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Hacer un buque while para que se vallan encendiendo de uno por uno cada cierto tiempo
  // Encender 1
  digitalWrite(led_1, HIGH);
  Serial.println("Encendido");
  delay(2000);
  // Apagar 1
  digitalWrite(led_1, LOW);
  Serial.println("Apagado");
  delay(2000);  
  // Encender 2
  digitalWrite(led_2, HIGH);
  Serial.println("Encendido");
  delay(2000);
  // Apagar 2
  digitalWrite(led_2, LOW);
  Serial.println("Apagado");
  delay(2000);  
  // Encender 3
  digitalWrite(led_3, HIGH);
  Serial.println("Encendido");
  delay(2000);
  // Apagar 3
  digitalWrite(led_3, LOW);
  Serial.println("Apagado");
  delay(2000);  
}
