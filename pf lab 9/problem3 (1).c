#include <stdio.h>

int check(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(check(n)){
        printf("%d is a prime number", n);
    }
    else printf("%d is not a prime number", n);
}

int check(int n){
    if(n==2) return 1;
    for(int i=2; i<=n/2; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
