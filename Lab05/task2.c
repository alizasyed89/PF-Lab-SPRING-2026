#include <stdio.h>

int main() {
    int units;
    char type;
    float bill;

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    printf("Enter Customer Type (D for Domestic, C for Commercial): ");
    scanf(" %c", &type);

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 300) {
        if (type == 'D' || type == 'd') {
            bill = units * 12;
        } else if (type == 'C' || type == 'c') {
            bill = units * 15;
        }
    } else {
        bill = units * 20;
    }

    printf("Total Electricity Bill = Rs %.2f\n", bill);

    return 0;
}