#include <stdio.h>

int main() {
    int attendance, exam;
    float assignments, final_grade;

    printf("Enter the attendance score: ");
    scanf("%d", &attendance);

    printf("Enter assignment score: ");
    scanf("%f", &assignments);

    printf("Enter exam score: ");
    scanf("%d", &exam);
    
    final_grade = exam + attendance + assignments;

    final_grade <= 20 ? printf("fail") :
    final_grade > 20 && final_grade <= 30 ? printf("E") :
    final_grade > 30 && final_grade <= 50 ? printf("D") :
    final_grade > 50 && final_grade <= 70 ? printf("C") :
    final_grade > 70 && final_grade < 80 ? printf("B") :
    final_grade >= 80 && final_grade <= 90 ? printf("A") :
    printf("AA");

    return 0;
}
