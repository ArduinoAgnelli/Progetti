#define button1Pin 2
#define button2Pin 3
#define ledPin 13

void setup() {
  //Impostiamo i pin dei pulsanti come ingresso
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  
  //Impostiamo il pin del LED come uscita
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //Leggiamo lo stato dei pulsanti
  int button1State = !digitalRead(button1Pin);
  int button2State = !digitalRead(button2Pin);

  //Se il primo pulsante è premuto, accendiamo il LED
  if (button1State == HIGH) {
    digitalWrite(ledPin, HIGH);
  }

  //Se il secondo pulsante è premuto, spegniamo il LED
  if (button2State == HIGH) {
    digitalWrite(ledPin, LOW);
  }
}
