#include <stdio.h>

int main() {
    int age;
    char citizenship;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("citizen? y/n : ");
    scanf(" %c", &citizenship);

    if (age >= 18 && citizenship == 'y' ) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
