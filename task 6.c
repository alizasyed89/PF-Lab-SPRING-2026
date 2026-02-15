#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float percentage;

    for(int i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered. Marks must be between 0 and 100.\n");
            return 1; 
        }
        sum += marks[i];
    }

    percentage = sum / 5.0;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 85) {
        printf("Grade A\n");
    } else if (percentage >= 70) {
        printf("Grade B\n");
    } else if (percentage >= 50) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
