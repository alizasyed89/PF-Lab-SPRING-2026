#include <stdio.h>

int main() {
    float cgpa;
    int income;

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter Family Income: ");
    scanf("%d", &income);

    if (cgpa >= 3.5) {
        if (income < 50000) {
            printf("Scholarship: 100%\n");
        } else {
            printf("Scholarship: 50%\n");
        }
    } else {
        if (cgpa >= 3.0 && income < 40000) {
            printf("Scholarship: 25%\n");
        } else {
            printf("No Scholarship\n");
        }
    }

    return 0;
}