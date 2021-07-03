const int trigger = 11;
const int echo = 10;

int tiempo;
int distancia;

const int led_red = 2; 
const int led_blue = 3;
const int led_yellow = 4;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop() {
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigger, LOW);
  // MEDIR EL TIEMPO EN ESTADO ALTO DEL PIN "ECHO" EL PULSO ES PROPORCIONAL A LA DISTANCIA MEDIDA
  tiempo = pulseIn(echo, HIGH);
  // LA VELOCIDAD DEL SONIDO ES DE 340 M/S O 29 MICROSEGUNDOS POR CENTIMETRO
  // DIVIDIMOS EL TIEMPO DEL PULSO ENTRE 58, TIEMPO QUE TARDA RECORRER IDA Y VUELTA UN CENTIMETRO LA ONDA SONORA
  // distancia = tiempo/velocidad
  distancia = tiempo/59;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(100);

  if(distancia < 100){
     digitalWrite(led_red, HIGH);   
     delay(100);                     
     digitalWrite(led_red, LOW);   
     delay(100); 
   }else if(distancia >= 100 and distancia <= 200){
    digitalWrite(led_blue, HIGH);   
     delay(100);                     
     digitalWrite(led_blue, LOW);   
     delay(100); 
   }else{
    //distancia > 200
     digitalWrite(led_yellow, HIGH);   
     delay(100);                     
     digitalWrite(led_yellow, LOW);   
     delay(100); 
    }
}
