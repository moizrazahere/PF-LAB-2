#include <stdio.h>

int main(){
    int n, len=0;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char str[n][100];
    for(int i=0; i<n; i++){
        printf("Enter %d word: ", i+1);
        scanf("%s", str[i]);
    }

    char word[20];
    printf("Enter the word to search: ");
    scanf("%s", word);
    for(int i=0; word[i]!='\0'; i++){
        len++;
    }

    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; str[i][j]!='\0'; j++){
            if(str[i][j]==word[j]){
                count++;
            }
        }
        if(count==len){
            printf("The word %s Found in the row %d of given string", word, i+1);
            return 0;
        }
    }
    printf("Word %s Not Found in given string", word);
}
