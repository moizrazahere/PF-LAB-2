#include <stdio.h>

void reverse(char str[], char reverse[]);

int main(){
    char str1[100], str2[100];
    printf("Enter g: ");
    fgets(str1, sizeof(str1), stdin);
    reverse(str1, str2);
    printf("backwards string is: ");
    puts(str2);
}

void reverse(char str[], char reverse[]){
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }

    for(int i=0; str[i]!='\0'; i++){
        reverse[i]=str[len-i-1];
    }
    return;
}
