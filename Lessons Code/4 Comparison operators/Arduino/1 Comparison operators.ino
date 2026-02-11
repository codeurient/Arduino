void setup() {
  Serial.begin(9600);

  int a = 10;
  int b = 20;

  Serial.print("a == b : ");
  Serial.println(a == b);

  Serial.print("a != b : ");
  Serial.println(a != b);

  Serial.print("a > b  : ");
  Serial.println(a > b);

  Serial.print("a < b  : ");
  Serial.println(a < b);

  Serial.print("a >= b : ");
  Serial.println(a >= b);

  Serial.print("a <= b : ");
  Serial.println(a <= b);
}

void loop() {
}
