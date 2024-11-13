#include <stdio.h>

int main(){
    char dest[100];
    printf("Enter destination string: ");
    scanf("%s", dest);
    char source[20];
    printf("Enter source string: ");
    scanf("%s", source);
    int n, len=0;
    printf("Enter number of characters you want to append: ");
    scanf("%d", &n);
    for(int i=0; dest[i]!='\0'; i++){
        len++;
    }
    for(int i=0; i<n; i++){
        dest[len+i+1]=source[i];
    }

    for(int i=0; i<=len+n; i++){
        printf("%c", dest[i]);
    }
}
