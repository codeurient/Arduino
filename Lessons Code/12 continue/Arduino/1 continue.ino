void setup() {
  Serial.begin(9600);

  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      continue;  // i = 3 olduqda dövrün qalan hissəsi atlanır
    }
    Serial.println(i);
  }
}

void loop() {
}
