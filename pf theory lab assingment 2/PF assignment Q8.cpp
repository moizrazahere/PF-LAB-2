#include <stdio.h>
#include <string.h>
#include <math.h>

int BinaryToDeci(int number);
int DeciToBinary(int number);
void DeciToHexa(int number);
void HexaToDeci(char hexNumber[]);
void BinaryToHexa(int number);
void HexaToBinary(char hexNumber[]);

int main() {
    int choice, number;
    char hexNumber[20];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexa\n");
        printf("4. Hexadecimal to Deci\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                printf("Decimal equivalent: %d\n", BinaryToDeci(number));
                break;
            case 2:
                printf("Enter a Decimal number: ");
                scanf("%d", &number);
                printf("Binary equivalent: ");
                DeciToBinary(number);
                break;
            case 3:
                printf("Enter a Decimal number: ");
                scanf("%d", &number);
                printf("Hexadecimal equivalent: ");
                DeciToHexa(number);
                break;
            case 4:
                printf("Enter a Hexadecimal number: ");
                scanf("%s", hexNumber);
                printf("Decimal equivalent: ");
                HexaToDeci(hexNumber);
                break;
            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                printf("Hexadecimal equivalent: ");
                BinaryToHexa(number);
                break;
            case 6:
                printf("Enter a Hexadecimal number: ");
                scanf("%s", hexNumber);
                printf("Binary equivalent: ");
                HexaToBinary(hexNumber);
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
int BinaryToDeci(int number) {
    int Deci = 0, base = 1, last_digit;
    while (number > 0) {
        last_digit = number % 10;
        number = number / 10;
        Deci += last_digit * base;
        base *= 2;
    }
    return Deci;
}
int DeciToBinary(int number) {
    if (number == 0) {
        printf("0");
        return 0;
    }
    int binary[32];
    int index = 0;

    while (number > 0) {
        binary[index] = number % 2;
        number = number / 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
void DeciToHexa(int number) {
    if (number == 0) {
        printf("0\n");
        return;
    }

    char hex[20];
    int index = 0;

    while (number > 0) {
        int remainder = number % 16;
        if (remainder < 10)
            hex[index++] = remainder + '0'; 
        else
            hex[index++] = remainder - 10 + 'A'; 
        number = number / 16;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");
}
void HexaToDeci(char hexNumber[]) {
    int Deci = 0;
    int base = 1; // 16^0
    int length = strlen(hexNumber);

    for (int i = length - 1; i >= 0; i--) {
        int digit;
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            digit = hexNumber[i] - '0';
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            digit = hexNumber[i] - 'A' + 10;
        } else {
            printf("Invalid Hexadecimal number.\n");
            return;
        }
        Deci += digit * base;
        base *= 16;
    }
    printf("Decimal equivalent: %d\n", Deci);
}

void BinaryToHexa(int number) {
    int Deci = BinaryToDeci(number); 
    DeciToHexa(Deci); 
}

void HexaToBinary(char hexNumber[]) {
    int Deci = 0;
    int base = 1;
    int length = strlen(hexNumber);

    for (int i = length - 1; i >= 0; i--) {
        int digit;
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            digit = hexNumber[i] - '0';
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            digit = hexNumber[i] - 'A' + 10;
        } else {
            printf("Invalid Hexadecimal number.\n");
            return;
        }
        Deci += digit * base;
        base *= 16;
    }
    DeciToBinary(Deci);
}
