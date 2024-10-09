#include <stdio.h>

int main() {
    int number, count = 0, mod;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    mod = (number < 0) ? -number : number;

    while (mod != 0) {
        mod = mod / 10;
        count++;
    }

    if (count > 1) {
        printf("%d is a multiple digit number.\n", number);
    } else {
        printf("%d is not a multiple digit number.\n", number);
    }

    return 0;
}
