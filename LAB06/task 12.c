#include <stdio.h>

int main() {
    int spaces = 50;
    int entry = 1;

    while(spaces > 0 && entry != 0) {

        printf("Enter 1 for new car (0 to stop): ");
        scanf("%d", &entry);

        if(entry == 1) {
            spaces--;
            printf("Remaining spaces: %d\n", spaces);
        }
    }

    if(spaces == 0)
        printf("Parking lot full");

    return 0;
}