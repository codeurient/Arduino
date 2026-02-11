#include <stdio.h>

int x = 100;  // global

void test() {
    int y = 20;  // local
    printf("%d\n", y);
}

int main() {
    test();
    printf("%d\n", x);
    return 0;
}
