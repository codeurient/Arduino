void setup() {
  Serial.begin(9600);  // Serial əlaqəni 9600 baud ilə açır
  while(!Serial);      // Serial açılmasını gözləyir (UNOs üçün optional) 

  // 1️⃣ int: tam ədəd, -32768 ... 32767
  int say = 123;
  Serial.print("Tam eded teyin etmek ucun istifade edilen `int` tipi = ");
  Serial.println(say);

  // 2️⃣ long: böyük tam ədəd, -2,147,483,648 ... 2,147,483,647
  long buyukSayi = 123456789;
  Serial.print("Boyuk tam eded teyin etmek ucun istifade edilen `long` tipi = ");
  Serial.println(buyukSayi);

  // 3️⃣ float: ondalıq ədəd (~ ±3.4e38)
  float temperatur = 36.6;
  Serial.print("Kesir eded teyin etmek ucun istifade edilen `float` tipi = ");
  Serial.println(temperatur);

  // 4️⃣ double: Arduino UNO-da float ilə eynidir ancaq digər platalarda dəyər daha böyük ola bilər
  double pi = 3.14159;
  Serial.print("Deqiq kesir eded teyin etmek ucun istifade edilen `double` tipi  = ");
  Serial.println(pi);

  // 5️⃣ char: tək simvol
  char harf = 'A';
  Serial.print("Tek herf teyin etmek ucun istifade edilen `char` tipi = ");
  Serial.println(harf);

  // 6️⃣ boolean: true / false
  boolean aktif = true;
  Serial.print("Aciq ve qapalini teyin etmek ucun istifade edilen `boolean` tipi = ");
  Serial.println(aktif); // true → 1, false → 0

  // 7️⃣ byte: 0 ... 255 arası kiçik tam ədəd
  byte yas = 25;
  Serial.print("Cok kicik deyerleri teyin etmek ucun istifade edilen `byte` tipi  = ");
  Serial.println(yas);

  // 8️⃣ String: mətni saxlamaq üçün (dinamik)
  String mesaj = "Salam Arduino";
  Serial.print("Metnleri teyin etmek ucun istifade edilen `String` tipi = ");
  Serial.println(mesaj);
}

void loop() {
  // loop boşdur, yalnız setup-da çap etdik
}
