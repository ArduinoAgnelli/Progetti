#define DO4 261
#define RE4 293
#define MI4 329
#define FA4 349
#define SOL4 392
#define LA4 440
#define SIB4 466
#define SI4 493
#define DO5 523
#define RE5 587
#define MI5 659

#define CROMA 400
#define SEMICROMA 200

int tema1[] = {MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, SOL4, LA4};
int tema2[] = {MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, LA4};
int pause1[] = {SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, SEMICROMA, CROMA+SEMICROMA};
int pause2[] = {SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA};

int REM[] = {RE4, FA4, LA4};
int SIB[] = {SIB4, RE4, FA4};
int DO[] = {DO4, SOL4, MI5};
int FA[] = {FA4, LA4, DO4};

#define BUZZER 2
#define N1 2
#define N2 2
#define N3 2

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(sizeof(pause1));
  
  for (int i = 0; i < sizeof(tema1) / 2; i++) {
    tone(BUZZER, tema1[i]);
    delay(pause1[i]);
    noTone(BUZZER);
  }

  for (int i = 0; i < sizeof(tema2) / 2; i++) {
    tone(BUZZER, tema2[i]);
    delay(pause1[i]);
    noTone(BUZZER);
  }

  delay(CROMA);
}
