void setup() {
  Serial.begin(9600);

  int i = 1;

  do {
    Serial.println(i);
    i++;
  } while (i <= 5);
}

void loop() {
}
