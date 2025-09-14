// C program to enter two floating type numbers and get their product.

#include <stdio.h>

int main() {
    float num1, num2; // Variables to store the two integers
    int result;      // Variable to check if the input is valid

    // Input validation loop for the first number
    while (1) {
        printf("Enter the first integer: ");
        result = scanf("%f", &num1); // Read integer input

        if (result == 1) {
            // If input is a valid integer, exit the loop
            break;
        } else {
            // If input is invalid (e.g., letters or symbols), print error message
            printf("Invalid input! Please enter a numeric value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Input validation loop for the second number
    while (1) {
        printf("Enter the second integer: ");
        result = scanf("%f", &num2); // Read integer input

        if (result == 1) {
            // If input is a valid integer, exit the loop
            break;
        } else {
            // If input is invalid, print error message
            printf("Invalid input! Please enter a numeric value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Calculate the product of the two integers
    float product = num1 * num2;

    // Display the result
    printf("The product of %f and %f is: %f\n", num1, num2, product);

    return 0;
}
