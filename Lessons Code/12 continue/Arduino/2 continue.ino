void setup() {
  Serial.begin(9600);

  int i = 0;

  while (i < 5) {
    i++;
    if (i == 3) {
      continue;  // i = 3 olduqda dövrün qalan hissəsi atlanır
    }
    Serial.println(i);
  }
}

void loop() {
}
