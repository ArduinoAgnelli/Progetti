#define L1 2
#define L2 3

#define B1 6
#define B2 7

#define GIRI 7

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
}

void loop() {
  for (int i = 0; i < GIRI; i++){
   	digitalWrite(L1, HIGH);
    digitalWrite(L2, LOW);
    delay(250);
    digitalWrite(L2, HIGH);
    digitalWrite(L1, LOW);
    delay(250);
  }
  
  digitalWrite(L2, LOW);
  digitalWrite(L1, LOW);
  
  for (int i = 0; i < GIRI; i++){
   	digitalWrite(B1, HIGH);
    digitalWrite(B2, LOW);
    delay(250);
    digitalWrite(B2, HIGH);
    digitalWrite(B1, LOW);
    delay(250);
  }
  
  digitalWrite(B2, LOW);
  digitalWrite(B1, LOW);
}
