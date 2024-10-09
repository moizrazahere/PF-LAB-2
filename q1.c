nt main() {
    int sum = 0; 
    int value;

 
    do {
        printf("Enter a number : ");
        scanf("%d", &value);

        sum += value;  

        printf("%d", sum);

    } while (value != 0);  

    printf("%d", sum);  

    return 0;
}
