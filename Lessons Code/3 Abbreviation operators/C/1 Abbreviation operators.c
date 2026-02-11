#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    a += b;   // a = a + b
    printf("a += b  -> %d\n", a);

    a -= b;   // a = a - b
    printf("a -= b  -> %d\n", a);

    a *= b;   // a = a * b
    printf("a *= b  -> %d\n", a);

    a /= b;   // a = a / b
    printf("a /= b  -> %d\n", a);

    a %= b;   // a = a % b
    printf("a %%= b -> %d\n", a);

    a++;      // a = a + 1
    printf("a++     -> %d\n", a);

    a--;      // a = a - 1
    printf("a--     -> %d\n", a);

    return 0;
}
