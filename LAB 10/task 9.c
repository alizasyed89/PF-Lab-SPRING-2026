#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("File not found. Creating default config...\n");

        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "retry=5\n");

        fclose(fptr);
    } else {
        printf("Config file exists\n");
        fclose(fptr);
    }

    return 0;
}