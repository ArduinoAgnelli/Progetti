#define INIZIO 0
#define FINE 7

void setup() {
  for (int i = INIZIO; i <= FINE; i++) {
  	pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = INIZIO; i <= FINE; i++) {
  	digitalWrite(i, HIGH);
    delay(250);
  }
  
  for (int i = INIZIO; i <= FINE; i++) {
  	digitalWrite(i, LOW);
    delay(250);
  }
}
