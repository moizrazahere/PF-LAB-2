int main() {
    int num1 = 1, num2 = 2,  num_3, i, total=6;

      printf(" %d %d", num1, num2);

    for (i = 3; i <= total; i++) { 
        num_3 = num1 + num2; 
        printf(" %d", num_3);
        num1 = num2;  
        num2 = num_3;  
    }

    printf("n");

    return 0;
}
