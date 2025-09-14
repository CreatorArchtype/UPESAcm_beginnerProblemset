// Given n numbers, counting and printing how many are zeros, positive or negative numbers


#include <stdio.h>

int main() {
    int n;          // Number of inputs
    double num;     // Variable to read each number
    int result;     // To validate input

    int zeros = 0;      // Counter for zeros
    int positives = 0;  // Counter for positive numbers
    int negatives = 0;  // Counter for negative numbers

    // Input validation for 'n'
    while (1) {
        printf("Enter how many numbers you want to input (n > 0): ");
        result = scanf("%d", &n);
        if (result == 1 && n > 0) {
            break;
        } else {
            printf("Invalid input! Please enter a positive integer.\n");
            while (getchar() != '\n'); // Clear input buffer
        }
    }

    // Process each number one at a time
    for (int i = 1; i <= n; i++) {
        while (1) {
            printf("Enter number %d: ", i);
            result = scanf("%lf", &num);
            if (result == 1) {
                break;
            } else {
                printf("Invalid input! Please enter a numeric value.\n");
                while (getchar() != '\n'); // Clear input buffer
            }
        }

        // Count based on value
        if (num > 0) {
            positives++;
        } else if (num < 0) {
            negatives++;
        } else {
            zeros++;
        }
    }

    // Output the results
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Zeros: %d\n", zeros);

    return 0;
}
