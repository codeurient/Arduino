int topla(int a, int b) {
  return a + b;
}

void setup() {
  Serial.begin(9600);

  Serial.print("Netice: ");
  Serial.println(topla(3, 7));
}

void loop() {
  // boş qalır
}
