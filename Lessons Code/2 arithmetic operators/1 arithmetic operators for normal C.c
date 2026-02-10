#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int c;
    
    // Toplama
    c = a + b;
    printf("Toplama: %d + %d = %d\n", a, b, c);
    
    // Çıxma
    c = a - b;
    printf("Çixma: %d - %d = %d\n", a, b, c);
    
    // Vurma
    c = a * b;
    printf("Vurma: %d * %d = %d\n", a, b, c);
    
    // Bölmə
    c = a / b;
    printf("Bölmə: %d / %d = %d\n", a, b, c);
    
    // Modulus (qalıq)
    c = a % b;
    printf("Qaliq: %d %% %d = %d\n", a, b, c); // % işarəsini %% ilə yazırıq
    
    // Artırma
    a++;
    printf("Artirma: a++ = %d\n", a);
    
    // Azaltma
    b--;
    printf("Azaltma: b-- = %d\n", b);

    return 0;
}
