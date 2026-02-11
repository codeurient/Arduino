#include <stdio.h>

int main() {
    int temperature = 18;

    if (temperature > 30) {
        printf("It's a hot day!\n");
    }
    else if (temperature >= 20 && temperature <= 30) {
        printf("The weather is nice.\n");
    }
    else {
        printf("It's a bit cold today.\n");
    }

    return 0;
}
