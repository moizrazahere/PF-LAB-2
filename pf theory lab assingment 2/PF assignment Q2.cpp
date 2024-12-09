#include <stdio.h>
#include <ctype.h>

void countChar(const char slogan[], int letters[]) {
    int i = 0;
    while (slogan[i] != '\0') {
        if (isalpha(slogan[i])) {
            letters[tolower(slogan[i]) - 'a']++;
        }
        i++;
    }
}

void clearInputBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    int letters[26] = {0};
    char slogan[100];

    while (1) {
        printf("Enter slogan (or press Enter to quit): ");

        if (!fgets(slogan,100, stdin)) {
            break;
        }

        if (slogan[0] == '\n') {
            break;
        }

        countChar(slogan, letters);

        printf("{");
        int first = 1;
        for (int i = 0; i < 26; i++) {
            if (letters[i] > 0) {
                if (!first) {
                    printf(", ");
                }
                printf("'%c': %d", 'a' + i, letters[i]);
                first = 0;
            }
        }
        printf("}\n");

        for (int i = 0; i <26; i++) {
            letters[i] = 0;
        }
    }

    return 0;
}
