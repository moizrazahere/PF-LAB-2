 #include <stdio.h>
#include <string.h>

void word_comp(char word[], char comp_word[], int *remC) {
    int i = 0;
    *remC = 0;
    int length = strlen(word);
    
    for (int j = 0; j < length; j++) {
        if (j == 0 || word[j] != word[j - 1]) {
            comp_word[i++] = word[j];
        } else {
            (*remC)++;
        }
    }
    comp_word[i] = '\0'; 
}

void multiple_words(char words[][100], int word_count, char comp_words[][100], int *remT) {
    *remT = 0;
    for (int i = 0; i < word_count; i++) {
        int remC = 0;
        word_comp(words[i], comp_words[i], &remC);
        *remT += remC; 
    }
}

int main() {
    int numwords, remT;
    
    printf("Enter the number of words: ");
    scanf("%d", &numwords);
    
    char words[numwords][100]; 
    char comp_word[numwords][100];

    printf("Enter the words:\n");
    for (int i = 0; i < numwords; i++) {
        scanf("%s", words[i]); 
    }

    multiple_words(words, numwords, comp_word, &remT); 

    printf("The compressed words are displayed below:\n");
    for (int k = 0; k < numwords; k++) { 
        printf("%s\n", comp_word[k]);
    }

    printf("Number of Characters removed: %d\n", remT);
    
    return 0;
}