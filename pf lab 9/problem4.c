#include <stdio.h>

float calculate(float, float, char);

int main(){
    float a, b;
    char c;
    printf("Enter Numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter the arithmetic operation: ");
    scanf(" %c", &c);

    if(c!='+' || c!='-' || c!='*' || c!='/'){
        printf("Invalid Operation");
        return 0;
    }

    if(a>b){
        printf("%.0f%c%.0f= %.1f", a, c, b, calculate(a, b, c));
    }
    else{
        printf("%.0f%c%.0f= %.1f",b, c, a, calculate(b, a, c));
    }
}

float calculate(float a, float b, char c){
    int result;
    if(c=='+') return a+b;
    else if(c=='*') return a*b;
    else if(c=='-') return a-b;
    else return a/b;
}
