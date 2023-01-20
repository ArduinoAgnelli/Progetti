//questo programma modifica il colore di un led RGB attraverso 3 potenziometri
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(3,analogRead(A0)/4);
  digitalWrite(6,analogRead(A1)/4);
  digitalWrite(5,analogRead(A2)/4);
}
