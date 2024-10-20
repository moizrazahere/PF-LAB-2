#include <stdio.h>

int main() {
    int n, i;
    
    printf("array size ?");
    scanf("%d", &n);
    
    int arr[n]; 
    int count[n]; 

    for (i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        printf(" %d = ", i + 1);
        scanf("%d", &arr[i]);
        
        count[arr[i]]++;
    }

    printf("Numbers occurring more than once: ");
    int found = 0; 
    for (i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    
    printf("n");
    
}
