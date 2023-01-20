#define LED1 2
#define LED2 3
#define LED3 4

#define POT A0

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  
  pinMode(POT, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  int tempo = analogRead(POT);
  
  Serial.print(tempo);
  Serial.println(" secondi");
  
  digitalWrite(LED1, HIGH);
  delay(tempo);
  digitalWrite(LED1, LOW);
  
  digitalWrite(LED2, HIGH);
  delay(tempo);
  digitalWrite(LED2, LOW);
  
  digitalWrite(LED3, HIGH);
  delay(tempo);
  digitalWrite(LED3, LOW);
}