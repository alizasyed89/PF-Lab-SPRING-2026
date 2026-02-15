#include <stdio.h>

int main() {
    float totalBill, discount;

    printf("Enter total bill amount: ");
    scanf("%f", &totalBill);

    if (totalBill < 0) {
        printf("Invalid input. Bill amount cannot be negative.\n");
    } else if (totalBill >= 5000) {
        discount = 0.2 * totalBill;
        printf("You get 20%% discount. Discounted Amount: %.2f\n", totalBill - discount);
    } else if (totalBill >= 3000) {
        discount = 0.1 * totalBill;
        printf("You get 10%% discount. Discounted Amount: %.2f\n", totalBill - discount);
    } else {
        printf("No discount. Amount to pay: %.2f\n", totalBill);
    }

    return 0;
}
