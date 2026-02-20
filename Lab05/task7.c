#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20], otp[10];

    printf("Enter Username: ");
    scanf("%s", username);

    if (strcmp(username, "aliza") == 0) {
        printf("Enter Password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") == 0) {
            printf("Enter OTP: ");
            scanf("%s", otp);

            if (strcmp(otp, "9999") == 0) {
                printf("Login Successful\n");
            } else {
                printf("Invalid OTP\n");
            }
        } else {
            printf("Incorrect Password\n");
        }
    } else {
        printf("Invalid Username\n");
    }

    return 0;
}