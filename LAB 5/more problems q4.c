#include <stdio.h>

int main() {
    int age;
    int income;
    int creditScore;

    printf("Enter age: ");
    scanf("%d", &age);

    
    printf("Enter your yearly ncome: ");
    scanf("%d", &income);


    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age >= 18 && income >= 50000 && creditScore >= 1200) {
        printf("You are eligible for a loan.");
    } else {
        printf("You are not eligible for a loan.");
    }

    return 0;
}
