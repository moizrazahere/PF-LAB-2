#include <stdio.h>

int main() {
    int a, b;
    printf("Enter num a: ");
    scanf("%d", &a);
    
    printf("Enter num b: ");
    scanf("%d", &b);

    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b; 

    printf(" a = %d and b = %d\n", a, b);

    return 0;
}
