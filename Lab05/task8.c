#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b;

    printf("Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power (x^y)\n");
    printf("7. Logarithm (log base 10)\n");
    printf("8. Absolute Value\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a * b);
            break;

        case 4:
            printf("Enter numerator and denominator: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a >= 0)
                printf("Square Root = %.2lf\n", sqrt(a));
            else
                printf("Square root of negative number is not allowed\n");
            break;

        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", pow(a, b));
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a > 0)
                printf("Logarithm = %.2lf\n", log10(a));
            else
                printf("Logarithm of zero or negative number is not allowed\n");
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%lf", &a);
            printf("Absolute Value = %.2lf\n", fabs(a));
            break;

        case 9:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            printf("Sine = %.2lf\n", sin(a));
            break;

        case 10:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            printf("Cosine = %.2lf\n", cos(a));
            break;

        case 11:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            printf("Tangent = %.2lf\n", tan(a));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}