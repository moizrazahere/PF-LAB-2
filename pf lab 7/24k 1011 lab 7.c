#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 


    printf("Enter the number of elements max 100 : ");
    scanf("%d", &n);



    printf("Enter elements n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
