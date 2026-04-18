#include <stdio.h>
#include <string.h>

int main() {
    char stored[] = "fast123";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strlen(input) == 0) {
            printf("Empty password!\n");
            continue;
        }

        if (strcmp(input, stored) == 0) {
            printf("Access Granted\n");
            return 0;
        } else {
            attempts++;

            if (attempts == 2) {
                if (strncmp(input, stored, 3) == 0)
                    printf("First 3 characters match\n");
                else
                    printf("First 3 characters do not match\n");
            }

            if (strcmp(input, stored) < 0)
                printf("Your input is alphabetically before\n");
            else
                printf("Your input is alphabetically after\n");
        }
    }

    printf("Account Locked\n");
    return 0;
}