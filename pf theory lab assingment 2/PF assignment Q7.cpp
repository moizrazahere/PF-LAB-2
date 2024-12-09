#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void populateArray(char array[6][5], const char *studentID_end) {
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = 'A' + (rand() % 26);  
        }
    }
    
    for (int j = 0; j < 5 && studentID_end[j] != '\0'; j++) {
        array[6 - 1][j] = studentID_end[j];
    }
}

void printArray(char array[6][5]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}
int searchString(char array[6][5], const char *search_str) {
    int len = strlen(search_str);
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= 5 - len; j++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (array[i][j + k] != search_str[k]) {
                    found = 0;
                    break;
                }
            }
            if (found) return 1;  
        }
    }
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i <= 6 - len; i++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (array[i + k][j] != search_str[k]) {
                    found = 0;
                    break;
                }
            }
            if (found) return 1;  
        }
    }
    
    return 0;  
}

int main() {
    char array[6][5];
    char studentID_end[] = "K0580";  
    char search_str[20];
    int score = 0;
 
    populateArray(array, studentID_end);
    printf("Initial Array:\n");
    printArray(array);
    while (1) {
        printf("\nEnter a string to search (or type 'END' to reset): ");
        scanf("%s", search_str);

        if (strcmp(search_str, "END") == 0) {
            
            populateArray(array, studentID_end);
            printf("\nNew Array:\n");
            printArray(array);
            continue;
        }

        if (searchString(array, search_str)) {
            score++;
            printf("String found! Score: %d\n", score);
        } else {
            score--;
            printf("String not found. Score: %d\n", score);
        }
    }

    return 0;
}
