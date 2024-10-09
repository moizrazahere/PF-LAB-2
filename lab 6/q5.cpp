#include <stdio.h>

int main() {
    
    int series[] = {65536, 32768, 10922, 2730, 54691, 13, 1, 0};
    int length = sizeof(series) / sizeof(series[0]);

    for (int i = 0; i < length; i++) {
        printf("%d", series[i]);

        if (i < length - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
