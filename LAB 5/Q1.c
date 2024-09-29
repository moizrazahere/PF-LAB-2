#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) {
            printf("You are a Child.");
        }
        else if (age <= 19) {
            printf("You are a Teenager.");
        }
        else if (age <= 59) {
            printf("You are an Adult.");
        }
        else {
            printf("You are a Senior.");
        }
    } else {
        printf("Invalid age entered.");
    }

    return 0;
}
