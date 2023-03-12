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

int tema1 = [MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, SOL4, LA4];
int tema2 = [MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, LA4];
int pause1 = [SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, SEMICROMA, CROMA+SEMICROMA];
int pause1 = [SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA];

#define BUZZER 2

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  for (int i = 0; i < sizeof(tema1) / 4, i++) {
    tone(BUZZER, tema1[i], pause1[i]);
    NoTone(BUZZER);
  }

  for (int i = 0; i < sizeof(tema2) / 4, i++) {
    tone(BUZZER, tema2[i], pause2[i]);
    NoTone(BUZZER);
  }

  delay(CROMA);
}