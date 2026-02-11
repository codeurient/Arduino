void setup() {
  Serial.begin(9600);  // Serial əlaqəni açır
  while(!Serial);      // USB-Serial açılana qədər gözləyir (Leonardo / Micro üçün)

  int a = 10;
  int b = 3;
  int c;

  // Toplama
  c = a + b;
  Serial.print("Toplama: ");
  Serial.print(a);
  Serial.print(" + ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(c);

  // Çıxma
  c = a - b;
  Serial.print("Çixma: ");
  Serial.print(a);
  Serial.print(" - ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(c);

  // Vurma
  c = a * b;
  Serial.print("Vurma: ");
  Serial.print(a);
  Serial.print(" * ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(c);

  // Bölmə
  c = a / b;
  Serial.print("Bölmə: ");
  Serial.print(a);
  Serial.print(" / ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(c);

  // Modulus (qalıq)
  c = a % b;
  Serial.print("Qaliq: ");
  Serial.print(a);
  Serial.print(" % ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(c);

  // Artırma
  a++;
  Serial.print("Artirma: a++ = ");
  Serial.println(a);

  // Azaltma
  b--;
  Serial.print("Azaltma: b-- = ");
  Serial.println(b);
}

void loop() {
  // loop boşdur, yalnız setup-da çap etdik
}
