// C program to find the remainder of dividing one integer by another.

#include <stdio.h>

int main() {
    int num1, num2;
    char ch;

    // Input validation loop
    while (1) {
        printf("Enter two integers (dividend and divisor): ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            break; // valid input
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF); // clear buffer
            printf("Invalid input! Please enter integers only.\n");
        }
    }

    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        int remainder = num1 % num2;
        printf("The remainder when %d is divided by %d is: %d\n", num1, num2, remainder);
    }

    return 0;
}
