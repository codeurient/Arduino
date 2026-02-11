void setup() {
  Serial.begin(9600);

  for (int i = 5; i >= 1; i--) {
    Serial.println(i);
  }
}

void loop() {
}
