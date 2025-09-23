// C program to check whether an integer is positive, negative, or zero.

#include <stdio.h>

int main() {
    int num;
    char ch;

    // Input validation loop
    while (1) {
        printf("Enter an integer: ");
        if (scanf("%d", &num) == 1) {
            break; // valid input
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF); // clear buffer
            printf("Invalid input! Please enter an integer only.\n");
        }
    }

   // if-else implementation for checking the number.
    if (num > 0) {
        printf("The number is Positive.\n");
    } else if (num < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
