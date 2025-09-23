// C program to print the smallest of three numbers using nested ternary operators.

#include <stdio.h>

int main(){

    double a,b,c;
    int result;
    double smallest;

    // Input validation loop for a.
    while (1) {
        printf("Enter the first number: ");
        result = scanf(" %lf", &a);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Input validation loop for b.
    while (1) {
        printf("Enter the second number: ");
        result = scanf(" %lf", &b);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Input validation loop for c.
    while (1) {
        printf("Enter the third number: ");
        result = scanf(" %lf", &c);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Ternary operator implemantation.
     smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

     printf("The smallest number is; %lf\n", smallest );

     return 0;

}