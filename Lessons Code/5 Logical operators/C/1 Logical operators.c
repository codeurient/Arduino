#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("(a > b) && (a > 0)  = %d\n", (a > b) && (a > 0));
    printf("(a < b) || (a > 0)  = %d\n", (a < b) || (a > 0));
    printf("!(a == b)           = %d\n", !(a == b));

    return 0;
}
