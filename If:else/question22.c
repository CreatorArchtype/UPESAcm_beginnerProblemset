// C program to input a year and check whether it is a leap year or not

#include <stdio.h>

int main() {
    int year;
    int inputCheck;

    // Loop Validation for a valid year
    while (1) {
        printf("Enter a valid 4-digit year (e.g., 2024): ");
        inputCheck = scanf("%d", &year);

        if (inputCheck == 1 && year >= 1000 && year <= 9999) {
            break;
        } else {
            printf("Invalid input! Please enter a valid 4-digit year.\n");

            // Clear invalid input from buffer
            while (getchar() != '\n');
        }
    }

    // Conditional checks for leap year
    if (year % 400 == 0) {
        printf("%d is a LEAP YEAR.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is NOT a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a LEAP YEAR.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
