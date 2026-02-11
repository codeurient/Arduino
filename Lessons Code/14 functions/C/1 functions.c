#include <stdio.h>

void hello() {
    printf("Salam\n");
}

void start() {
    hello();   // start funksiyası hello-nu çağırır
}

int main() {
    start();   // main start-ı çağırır
    return 0;
}
