void setup() {
  Serial.begin(9600);

  unsigned char a = 5;   // 00000101
  unsigned char b = 3;   // 00000011

  Serial.print("a & b  = ");
  Serial.println(a & b);   // 1

  Serial.print("a | b  = ");
  Serial.println(a | b);   // 7

  Serial.print("a ^ b  = ");
  Serial.println(a ^ b);   // 6

  Serial.print("~a     = ");
  Serial.println((unsigned char)~a);

  Serial.print("a << 1 = ");
  Serial.println(a << 1);  // 10

  Serial.print("a >> 1 = ");
  Serial.println(a >> 1);  // 2
}

void loop() {
}


// Nəticə:
//      a & b  = 1
//      a | b  = 7
//      a ^ b  = 6
//      ~a     = 250
//      a << 1 = 10
//      a >> 1 = 2