#include <stdio.h>

int main(void) {

    // 1️⃣ int: tam ədəd, adətən -32768 ... 32767 (platformadan asılıdır)
    int say = 123;
    printf("Tam eded teyin etmek ucun istifade edilen `int` tipi = %d\n", say);

    // 2️⃣ long: böyük tam ədəd
    long buyukSayi = 123456789;
    printf("Boyuk tam eded teyin etmek ucun istifade edilen `long` tipi = %ld\n", buyukSayi);

    // 3️⃣ float: ondalıq ədəd
    float temperatur = 36.6f;
    printf("Kesir eded teyin etmek ucun istifade edilen `float` tipi = %.2f\n", temperatur);

    // 4️⃣ double: daha dəqiq ondalıq ədəd
    double pi = 3.14159;
    printf("Deqiq kesir eded teyin etmek ucun istifade edilen `double` tipi = %.5f\n", pi);

    // 5️⃣ char: tək simvol
    char herf = 'A';
    printf("Tek herf teyin etmek ucun istifade edilen `char` tipi = %c\n", herf);

    // 6️⃣ boolean yoxdur → int istifadə olunur
    int aktif = 1; // 1 = true, 0 = false
    printf("Aciq ve qapali teyin etmek ucun istifade edilen boolean menali `int` = %d\n", aktif);

    // 7️⃣ unsigned char: 0 ... 255
    unsigned char yas = 25;
    printf("Cox kicik deyerleri teyin etmek ucun istifade edilen `unsigned char` tipi = %u\n", yas);

    // 8️⃣ String yoxdur → char array istifadə olunur
    char mesaj[] = "Salam C Dili";
    printf("Metnleri teyin etmek ucun istifade edilen `char[]` tipi = %s\n", mesaj);

    return 0;
}
