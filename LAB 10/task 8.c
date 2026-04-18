#include <stdio.h>

int main() {
    FILE *fptr;
    int score, i, sum = 0, val;
    float avg;

    fptr = fopen("survey.txt", "w");

    for (i = 0; i < 5; i++) {
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    while (fscanf(fptr, "%d", &val) != EOF) {
        sum += val;
    }

    avg = sum / 5.0;

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(fptr);
    return 0;
}