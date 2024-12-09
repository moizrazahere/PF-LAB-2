#include <stdio.h>
#include <string.h>
void sort_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
void group_anagrams(char trnsc[10][100], int num_trnsc) {
    char sorted[10][100];
    int grouped[10] = {0}; 
    int group_number = 1; 

    printf("Grouped Anagrams:\n");
    for (int i = 0; i < num_trnsc; i++) {
        if (grouped[i]) continue; 
        strcpy(sorted[i], trnsc[i]);
        sort_string(sorted[i]);
        
        printf("Group %d: ", group_number++); 
        for (int j = 0; j < num_trnsc; j++) {
            char temp[100];
            strcpy(temp, trnsc[j]);
            sort_string(temp);

            if (strcmp(sorted[i], temp) == 0) {
                printf("%s ", trnsc[j]);
                grouped[j] = 1; 
            }
        }
        printf("\n"); 
    }
}

int main() {
    char trnsc[10][100];
    int num_trnsc;

    printf("Enter number of transactions: ");
    scanf("%d", &num_trnsc);
    getchar(); 

    for (int i = 0; i < num_trnsc; i++) {
        printf("Enter transaction %d: ", i + 1);
        fgets(trnsc[i], 100, stdin);
        trnsc[i][strcspn(trnsc[i], "\n")] = '\0'; 
    }
    group_anagrams(trnsc, num_trnsc);

    return 0;
}
