#include <stdio.h>

int main() {
    int choice;

    printf("ATM Menu:\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your balance is $10,000\n");
            break;
        case 2:
            printf("Cash Withdrawal Selected\n");
            break;
        case 3:
            printf("Deposit Selected\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
