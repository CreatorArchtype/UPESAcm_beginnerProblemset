// C program to print the value of an expression using all basic arithmetic operators.

#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Input validation loop
    while (1) {
        printf("Enter two integers: ");
        if (scanf("%d %d", &a, &b) == 2) {
            break; // valid input
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF); // clear buffer
            printf("Invalid input! Please enter integers only.\n");
        }
    }

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Remainder: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and remainder not possible (divisor is zero).\n");
    }

    return 0;
}
