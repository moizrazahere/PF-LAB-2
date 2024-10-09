//q3
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, count = 0, mod;

    printf("Enter a number: ");
    scanf("%d", &number);

    mod = abs(number);

    while (mod != 0) {
        mod = mod / 10;
        count++;
    }

    if (count > 1) {
        printf("%d is a multiple-digit number.\n", number);
    } else {
        printf("%d is not a multiple-digit number.\n", number);
    }

    if (number == 1) {
        printf("1 is neither prime nor composite.\n");
    } else if (number == 2) {
        printf("%d is a prime number.\n", number);
    } else if (number < 1) {
        printf("%d is neither prime nor composite.\n", number);
    } else {
        int isPrime = 1;

        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is a composite number.\n", number);
        }
    }

    return 0;
}

