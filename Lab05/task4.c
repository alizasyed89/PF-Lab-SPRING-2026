#include <stdio.h>

int main() {
    int category, item, quantity;
    int price = 0;

    printf("Select Category (1-Fast Food, 2-Desi Food): ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("1-Burger, 2-Pizza: ");
            scanf("%d", &item);
            if (item == 1) price = 500;
            else if (item == 2) price = 1200;
            break;

        case 2:
            printf("1-Biryani, 2-Karahi: ");
            scanf("%d", &item);
            if (item == 1) price = 350;
            else if (item == 2) price = 1500;
            break;

        default:
            printf("Invalid Category\n");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = Rs %d\n", price * quantity);
    return 0;
}