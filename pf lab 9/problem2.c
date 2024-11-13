#include <stdio.h>

void swapIntegers(int a, int b);

int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    swapIntegers(a, b);
}

void swapIntegers(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    printf("The first number is: %d\n", a);
    printf("The second number is: %d", b);
    return;
}
