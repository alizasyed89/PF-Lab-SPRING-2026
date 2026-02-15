#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Scientific Calculator Menu:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square\n6. Cube\n7. Square Root\n8. Power (x^y)\n9. Absolute Value\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: case 2: case 3: case 4: case 8:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            break;
    }

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        case 5:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Square: %.2lf\n", result);
            break;
        case 6:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = num1 * num1 * num1;
            printf("Cube: %.2lf\n", result);
            break;
        case 7:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 < 0)
                printf("Error: Cannot take square root of negative number\n");
            else {
                result = sqrt(num1);
                printf("Square Root: %.2lf\n", result);
            }
            break;
        case 8:
            result = pow(num1, num2);
            printf("Power: %.2lf\n", result);
            break;
        case 9:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Absolute Value: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
