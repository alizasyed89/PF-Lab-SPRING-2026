#include <stdio.h>

int main() {
    int balance, usage;

    printf("Enter data balance (MB): ");
    scanf("%d", &balance);

    while(balance > 0) {
        printf("Enter data usage (MB): ");
        scanf("%d", &usage);

        balance = balance - usage;
        printf("Remaining balance: %d MB\n", balance);
    }

    printf("Data balance finished.");

    return 0;
}