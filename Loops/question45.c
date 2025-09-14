#include <stdio.h>

int main() {
    int n;      // The upper limit for prime numbers
    int result; // To check if the input is a valid integer

    // Input validation loop for 'n'
    while (1) {
        printf("Enter the value of n (positive integer greater than 1): ");
        result = scanf("%d", &n); // Read integer from user

        // Check if input is valid and greater than 1
        if (result == 1 && n > 1) {
            break; // Valid input, exit loop
        } else {
            printf("Invalid input! Please enter an integer greater than 1.\n");

            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    }

    printf("Prime numbers between 1 and %d are:\n", n);

    // Loop through each number from 2 to n to check for prime nature.
    for (int num = 2; num <= n; num++) {
        int isPrime = 1; // Assume the number is prime

        // Check if 'num' is divisible by any number from 2 to sqrt(num)
        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                isPrime = 0; // Not prime if divisible
                break;        // Exit inner loop early
            }
        }

        // If 'num' is prime, print it
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0; 
}
