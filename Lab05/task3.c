#include <stdio.h>

int main() {
    int vehicle, option, hours;
    int rate = 0;

    printf("Enter Vehicle Type (1-Car, 2-Bike, 3-Bus): ");
    scanf("%d", &vehicle);

    printf("Enter Hours Parked: ");
    scanf("%d", &hours);

    switch (vehicle) {
        case 1:
            printf("1-Regular, 2-VIP: ");
            scanf("%d", &option);
            if (option == 1) rate = 50;
            else if (option == 2) rate = 100;
            break;

        case 2:
            printf("1-Regular, 2-Premium: ");
            scanf("%d", &option);
            if (option == 1) rate = 20;
            else if (option == 2) rate = 40;
            break;

        case 3:
            rate = 200;
            break;

        default:
            printf("Invalid Vehicle Type\n");
            return 0;
    }

    printf("Total Parking Fee = Rs %d\n", rate * hours);
    return 0;
}