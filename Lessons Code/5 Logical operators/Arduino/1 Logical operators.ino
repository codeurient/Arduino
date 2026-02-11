void setup() {
  Serial.begin(9600);

  int a = 10;
  int b = 5;

  Serial.print("(a > b) && (a > 0)  = ");
  Serial.println((a > b) && (a > 0));

  Serial.print("(a < b) || (a > 0)  = ");
  Serial.println((a < b) || (a > 0));

  Serial.print("!(a == b)           = ");
  Serial.println(!(a == b));
}

void loop() {
}



// Verilən dəyərlərə görə:
// (a > b) → 10 > 5 → true (1)
// (a > 0) → true (1)
// 1 && 1 → 1
// (a < b) → false (0)
// (a > 0) → true (1)
// 0 || 1 → 1
// (a == b) → false (0)
// !(0) → 1