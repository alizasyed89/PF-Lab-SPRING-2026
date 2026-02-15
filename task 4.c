#include <stdio.h>

int main() {
    char username[6];
    char password[5];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (
        username[0] == 'a' &&
        username[1] == 'l' &&
        username[2] == 'i' &&
        username[3] == 'z' &&
        username[4] == 'a' &&
        username[5] == '\0' &&

        password[0] == '1' &&
        password[1] == '2' &&
        password[2] == '3' &&
        password[3] == '4' &&
        password[4] == '\0'
       )
    {
        printf("Login Successful\n");
    }
    else
    {
        printf("Invalid Credentials\n");
    }

    return 0;
}
