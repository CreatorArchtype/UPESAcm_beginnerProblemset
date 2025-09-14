//C program to print Fibonacci sequence from 0 to n 

#include <stdio.h>

int main() {
    int n;      // The upper limit for the Fibonacci series
    int result; // To check if the input is a valid integer

    // Variables to generate the Fibonacci sequence
    int a = 0;
    int b = 1;
    int next;

    // Input validation loop for 'n'
    while (1) {
        printf("Enter the value of n (positive integer): ");
        result = scanf("%d", &n); // Read integer from user

        // Check if input is valid and non-negative
        if (result == 1 && n >= 0) {
            break; // Valid input, exit loop
        } else {
            printf("Invalid input! Please enter a non-negative integer.\n");

            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    }

    // Print the Fibonacci series up to 'n'
    printf("Fibonacci series up to %d:\n", n);

    // Handle special case where n = 0
    if (n == 0) {
        printf("0\n");
    } else {
        // Print the first Fibonacci number
        printf("%d", a);

        // Continue printing until next number exceeds 'n'
        while (b <= n) {
            printf(" %d", b);

            // Generate next Fibonacci number
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n"); // Print newline at the end
    }

    return 0; // Program ends successfully
}
