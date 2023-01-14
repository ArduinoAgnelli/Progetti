#define RED1 3
#define YELLOW1 4
#define GREEN1 5

#define RED2 3
#define YELLOW2 4
#define GREEN2 5

void setup() {
  pinMode(RED1, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(YELLOW2, OUTPUT);
  pinMode(GREEN2, OUTPUT);

  digitalWrite(RED1, LOW);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED2, LOW);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(GREEN2, LOW);
}

void loop() {
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2, HIGH);
  delay(7000);
  digitalWrite(GREEN2, LOW);

  digitalWrite(YELLOW2, HIGH);
  delay(3000);
  digitalWrite(RED1, LOW);
  digitalWrite(YELLOW2, LOW);

  digitalWrite(GREEN1, HIGH);
  digitalWrite(RED2, HIGH);
  delay(7000);
  digitalWrite(RED2, LOW);
  digitalWrite(GREEN1, LOW);
}
