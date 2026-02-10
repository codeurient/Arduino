#include <stdio.h>

int main() {
    unsigned char a = 5;   // 00000101
    unsigned char b = 3;   // 00000011

    printf("a & b  = %d\n", a & b);   // 00000001 → 1
    printf("a | b  = %d\n", a | b);   // 00000111 → 7
    printf("a ^ b  = %d\n", a ^ b);   // 00000110 → 6
    printf("~a     = %d\n", (unsigned char)~a);

    printf("a << 1 = %d\n", a << 1);  // 00001010 → 10
    printf("a >> 1 = %d\n", a >> 1);  // 00000010 → 2

    return 0;
}
