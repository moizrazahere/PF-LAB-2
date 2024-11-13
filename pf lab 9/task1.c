#include <stdio.h>

int product(int, int);

int main(){
    int a, b;
    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);
    printf("The product of %d and %d is: %d", a, b, product(a, b));
}

int product(int a, int b){
    return a*b;
}   
