#include <stdio.h>

int main() {
    char REAL, HIDDEN, DECODED;
    char key;

    printf("Enter a character to encrypt: ");
    scanf("%c", &REAL);

    printf("Enter a key character for encryption: ");
    scanf(" %c", &key);

    
    HIDDEN = REAL ^ key;

    
    DECODED = HIDDEN ^ key;

    printf("Original Character: %c\n", REAL);
    printf("Encrypted Character: %c\n", HIDDEN);
    printf("Decrypted Character: %c\n", DECODED);

    return 0;
}
