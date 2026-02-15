#include <stdio.h>

int main() {
    float attendance;

    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 0 || attendance > 100) {
        printf("Invalid input. Attendance must be between 0 and 100.\n");
    } else if (attendance >= 75) {
        printf("Eligible for Exam\n");
    } else {
        printf("Not Eligible for Exam\n");
    }

    return 0;
}
