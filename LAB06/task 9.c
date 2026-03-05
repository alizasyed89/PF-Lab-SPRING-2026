#include <stdio.h>

int main() {
    int N, total = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        total = total + (i * 100);
    }

    printf("Total revenue: %d", total);

    return 0;
}