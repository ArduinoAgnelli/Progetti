#define DO 261
#define RE 293
#define MI 329
#define FA 349
#define SOL 392
#define LA 440
#define SI 493
#define DO2 523

#define TONO 500
#define SEMITONO 250

string note = [SI, SI, DO, RE, RE, DO, SI, LA, SOL, SOL, LA, SI, LA, SOL, SOL];
string pause = [TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO, TONO+SEMITONO, SEMITONO, TONO*2];

#define BUZZER 2

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  for (int i = 0; i < 15, i++) {
    tone(BUZZER, note[i]);
    delay(pause[i]);
    NoTone(BUZZER);
  }
}