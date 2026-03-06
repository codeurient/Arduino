#define LED_RED 6
#define BUTTON1 8

bool state = false;

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(BUTTON1, INPUT);
}

void loop() {
    if (digitalRead(BUTTON1) == HIGH) {
        state = !state;                 // vəziyyəti dəyiş (on/off)
        digitalWrite(LED_RED, state);   // LED-i yeni vəziyyətə görə yandır/söndür

        while (digitalRead(BUTTON1) == HIGH) {
            delay(1);                   // düymə buraxılana qədər gözlə
        }
    }
}
