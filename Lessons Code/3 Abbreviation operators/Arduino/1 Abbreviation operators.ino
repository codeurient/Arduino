void setup() {
  Serial.begin(9600);

  int a = 10;
  int b = 3;

  a += b;   // a = a + b
  Serial.print("a += b  -> ");
  Serial.println(a);

  a -= b;   // a = a - b
  Serial.print("a -= b  -> ");
  Serial.println(a);

  a *= b;   // a = a * b
  Serial.print("a *= b  -> ");
  Serial.println(a);

  a /= b;   // a = a / b
  Serial.print("a /= b  -> ");
  Serial.println(a);

  a %= b;   // a = a % b
  Serial.print("a %= b  -> ");
  Serial.println(a);

  a++;      // a = a + 1
  Serial.print("a++     -> ");
  Serial.println(a);

  a--;      // a = a - 1
  Serial.print("a--     -> ");
  Serial.println(a);
}

void loop() {
  // boş qalır
}
