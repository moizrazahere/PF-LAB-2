#include<stdio.h>

int main() {
    int variable = 5;  /
    int value, Newvalue;

    printf("Enter a value (enter 0 to stop): ");
    scanf("%d", &value);

    
    while (value != 0) {
        
        if (value > 0) {
            Newvalue = value + variable;
            printf("\nValue after addition: %d", Newvalue);
        }

        printf("Enter a value (enter 0 to stop): ");
        scanf("%d", &value);
    }

    printf("Variable remains unchanged: %d", variable);  

    return 0;
}


