#define LED_RED 6
#define LED_BLUE 5

#define BUTTON1 8
#define BUTTON2 9

int state = 0;

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);

    pinMode(BUTTON1, INPUT);
    pinMode(BUTTON2, INPUT);

    Serial.begin(9600);
}

void loop() {
    if(digitalRead(BUTTON1) == HIGH) {
        state = !(state);
        digitalWrite(LED_RED, HIGH);
        digitalWrite(LED_BLUE, LOW);
    } else if(digitalRead(BUTTON2) == HIGH) {
        state = !(state);
        digitalWrite(LED_RED, LOW);
        digitalWrite(LED_BLUE, HIGH);
    }
}