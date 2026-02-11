void setup() {
  Serial.begin(9600);

  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break;  // i = 5 olduqda dövr dayandırılır
    }
    Serial.println(i);
  }
}

void loop() {
}
