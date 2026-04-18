#include <stdio.h>

int main() {
    FILE *fptr;
    char name[30];
    int s1, s2, s3;
    float avg;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter 3 scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    fptr = fopen("report.txt", "w+");

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Scores: %d %d %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", avg);

    if (avg >= 50)
        fprintf(fptr, "Status: Pass\n");
    else
        fprintf(fptr, "Status: Fail\n");

    rewind(fptr);

    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);
    return 0;
}