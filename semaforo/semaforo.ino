#define RED1 3
#define YELLOW1 4
#define GREEN1 5

void setup() {
  pinMode(RED1, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(GREEN1, OUTPUT);

  digitalWrite(RED1, LOW);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, LOW);
}

void loop() {
  digitalWrite(RED1, HIGH);
  
  delay(7000);
  
  digitalWrite(RED1, LOW);
  digitalWrite(YELLOW1, HIGH);

  delay(3000);

  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, HIGH);

  delay(7000);
  digitalWrite(GREEN1, LOW);
}