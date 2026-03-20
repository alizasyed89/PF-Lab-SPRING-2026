#include <stdio.h>

int main() {
    int marks[4][3];
    int i, j;

    
    printf("Enter marks of 4 students (3 subjects each):\n");
    for(i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

   
    printf("\nTotal marks of each student:\n");
    for(i = 0; i < 4; i++) {
        int total = 0;
        for(j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d = %d\n", i + 1, total);
    }

    
    printf("\nAverage marks of each subject:\n");
    for(j = 0; j < 3; j++) {
        int sum = 0;
        for(i = 0; i < 4; i++) {
            sum += marks[i][j];
        }
        printf("Subject %d = %.2f\n", j + 1, sum / 4.0);
    }

    return 0;
}