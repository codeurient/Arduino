int x = 100;  // global dəyişən

void test() {
  int y = 20;  // lokal dəyişən
  Serial.println(y);
}

void setup() {
  Serial.begin(9600);

  test();
  Serial.println(x);
}

void loop() {
  // boş qalır
}
