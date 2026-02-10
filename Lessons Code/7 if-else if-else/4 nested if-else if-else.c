#include <stdio.h>

int main() {
    int temperature = 28;

    if (temperature > 30) {
        printf("It's a hot day!\n");
    }
    else if (temperature >= 20 && temperature <= 30) {
        // İç-içə if nümunəsi
        if (temperature >= 25) {
            printf("The weather is warm.\n");
        } else {
            printf("The weather is mild.\n");
        }
    }
    else {
        printf("It's a bit cold today.\n");
    }

    return 0;
}
