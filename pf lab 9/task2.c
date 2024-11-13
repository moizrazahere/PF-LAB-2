#include <stdio.h>

void check(int);

int main(){
    int n;
    printf("Enter Numbers: ");
    scanf("%d", &n);
    check(n);
}

void check(int n){
    if(n%2==0){
        printf("%d is an even number", n);
        return;
    }
    else{
        printf("%d is an odd number", n);
        return;
    }
}
