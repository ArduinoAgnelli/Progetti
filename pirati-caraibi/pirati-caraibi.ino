#include <Tone.h>

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

int tema1[] = {MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, SOL4, LA4, MI4, SOL4, LA4, LA4, LA4, SI4, DO5, DO5, DO5, RE5, SI4, SI4, LA4, SOL4, LA4};
int pause1[] = {SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, SEMICROMA, CROMA+SEMICROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA, CROMA, SEMICROMA, SEMICROMA, CROMA};

int REM[] = {RE4, FA4, LA4};
int SIB[] = {SIB4, RE4, FA4};
int DO[] = {DO4, SOL4, MI5};
int FA[] = {FA4, LA4, DO4};

#define BUZZER 2
#define N1 3
#define N2 11
#define N3 5

Tone tone1, tone2, tone3, canzone;

void setup() {
  //pinMode(BUZZER, OUTPUT);
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  pinMode(N3, OUTPUT);
  Serial.begin(9600);
  tone1.begin(3);
  tone2.begin(4);
  tone3.begin(5);
  canzone.begin(2);
}

void loop() {
  for (int i = 0; i < sizeof(tema1) / 2; i++) {
    /*if (i == 2 || i == 14 || i == 18 || i == 30) {
        tone(N1, REM[0]);
        tone(N2, REM[1]);
        tone(N3, REM[2]);
    } else if (i == 6) {
      tone(N1, SIB[0]);
      tone(N2, SIB[1]);
      tone(N3, SIB[2]);
    } else if (i == 10 || i == 26) {
      tone(N1, DO[0]);
      tone(N2, DO[1]);
      tone(N3, DO[2]);
    } else if (i == 22) {
      tone(N1, FA[0]);
      tone(N2, FA[1]);
      tone(N3, FA[2]);
    }*/

    canzone.play(tema1[i]);
    //tone(BUZZER, tema1[i]);
    delay(pause1[i]);
    canzone.play(0);
  }

//  tone1.play(NOTE_C4);
  //tone2.play(NOTE_G4);
  //tone3.play(NOTE_E5);

  delay(CROMA);
}
