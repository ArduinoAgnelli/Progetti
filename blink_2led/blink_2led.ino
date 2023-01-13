#define LED1 3
#define LED2 4

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);       // accendiamo il LED1 e spegnamo il LED2
    digitalWrite(LED2, LOW);

    delay(1000);        // 1s di pausa

    digitalWrite(LED1, LOW);       // accendiamo il LED2 e spegnamo il LED1
    digitalWrite(LED2, HIGH);

    delay(1000);        // 1s di pausa
}