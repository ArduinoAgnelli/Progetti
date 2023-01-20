#define LED 3
#define POT A0

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  int valore = analogRead(POT) / 4;
  
  analogWrite(LED, valore);
  
  Serial.println(valore);
}