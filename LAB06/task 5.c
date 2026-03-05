#include <stdio.h>

int main() {
    int units, total = 0, count = 0;

    printf("Enter units consumed (-999 to stop): ");
    scanf("%d", &units);

    while(units != -999) {
        total += units;
        count++;

        printf("Enter units consumed (-999 to stop): ");
        scanf("%d", &units);
    }

    if(count > 0)
        printf("Average consumption: %.2f", (float)total / count);
    else
        printf("No data entered.");

    return 0;
}