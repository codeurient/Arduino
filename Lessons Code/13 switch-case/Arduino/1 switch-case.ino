// Arduino üçün uyğun versiya belə olacaq. scanf Arduino-da işləmədiyi üçün serial üzərindən oxuma istifadə olunur:
void setup() {
  Serial.begin(9600);
  while (!Serial) { ; }  // Serial hazır olana qədər gözlə

  Serial.println("1-7 arasi gun daxil edin: ");

  int gun = 0;
  while (gun == 0) {
    if (Serial.available() > 0) {
      gun = Serial.parseInt();  // Serial-dan integer oxu
    }
  }

  switch (gun) {
    case 1:
      Serial.println("Bazar ertesi");
      break;
    case 2:
      Serial.println("Cersenbe axsami");
      break;
    case 3:
      Serial.println("Cersenbe");
      break;
    case 4:
      Serial.println("Cume axsami");
      break;
    case 5:
      Serial.println("Cume");
      break;
    case 6:
      Serial.println("Senbe");
      break;
    case 7:
      Serial.println("Bazar");
      break;
    default:
      Serial.println("Yanlis secim!");
  }
}

void loop() {
  // Boş qalır
}



// Necə işləyir:
//      Serial.begin(9600) → Serial əlaqəni açır
//      İstifadəçi Serial Monitor-dan 1–7 arası ədəd daxil edir
//      Serial.parseInt() ilə ədəd oxunur
//      switch ilə daxil edilən günə uyğun mesaj göstərilir

// Qeyd:
//      Serial Monitor-da Newline seçmək lazımdır (Enter-dən sonra oxuma üçün)
//      default bloku istifadəçi 1–7 arası dəyər daxil etmədikdə işləyir