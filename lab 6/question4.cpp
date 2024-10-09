#include <stdio.h>

int main() {
    int n = 6;
    int series[n];
    int firstterm=0;
    int secondterm=1;
        series[firstterm]=1;
        series[secondterm]=2;
    for (int i = 1; i <= n; i++) {
        series[i+1]=series[i]+series[i-1];
    }
    printf("The series is:\n");
    for (int i=0 ; i<=n ; i++){
        printf("%d\t",series[i]);
    }
    printf("\n");

    return 0;
}

