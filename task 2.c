#include <stdio.h>

int main() {
    int units;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
    } else if (units <= 100) {
        printf("Low Usage\n");
    } else if (units <= 300) {
        printf("Medium Usage\n");
    } else {
        printf("High Usage\n");
    }

    return 0;
}
