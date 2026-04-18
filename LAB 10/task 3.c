#include <stdio.h>
#include <string.h>

int main() {
    char email[50], copy[50], formatted[100] = "Email: ";
    char *ptr;

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(copy, email);

    ptr = strchr(copy, '@');

    if (ptr == NULL) {
        printf("Invalid email (no @ found)\n");
        return 0;
    }

    ptr++; // skip '@'
    printf("Domain: %s\n", ptr);

    if (strstr(ptr, ".") == NULL) {
        printf("Invalid domain (no . found)\n");
    }

    strcat(formatted, copy);
    printf("%s\n", formatted);

    return 0;
}