void setup() {
  Serial.begin(9600);

  int i = 1;

  while (i <= 5) {
    Serial.println(i);
    i++;
  }
}

void loop() {
}
