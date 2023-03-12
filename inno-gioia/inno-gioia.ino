#define DO4 261
#define RE4 293
#define MI4 329
#define FA4 349
#define SOL4 392
#define LA4 440
#define SI4 493
#define DO5 523
#define RE5 587

#define CROMA 500
#define SEMICROMA 250

int note[] = {SI4, SI4, DO5, RE5, RE5, DO5, SI4, LA4, SOL4, SOL4, LA4, SI4, LA4, SOL4, SOL4};
int pause[] = {CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA, CROMA+SEMICROMA, SEMICROMA, CROMA*2};

#define BUZZER 2

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  for (int i = 0; i < 15; i++) {
    tone(BUZZER, note[i]);
    delay(pause[i]);
    noTone(BUZZER);
  }
  
  delay(1000);
}
