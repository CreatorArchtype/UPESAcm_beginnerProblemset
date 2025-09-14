// C program to Read a distance in kilometers and print its equivalent in meters, centimeters, and
//millimeters.

#include <stdio.h>

int main() {
    double kilometers; // Variable to store the distance in kilometers
    double meters, centimeters, millimeters; // Variables for conversions
    int result; // To check if input is valid

    // Input validation loop to ensure the user enters a valid double
    while (1) {
        printf("Enter distance in kilometers: ");
        result = scanf("%lf", &kilometers); // Read input as a double

        if (result == 1) {
            // If the input is valid, exit the loop
            break;
        } else {
            // If the input is invalid, print error message
            printf("Invalid input! Please enter a numeric value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Perform the conversions
    meters = kilometers * 1000;          // 1 km = 1000 meters
    centimeters = kilometers * 100000;   // 1 km = 100000 cm
    millimeters = kilometers * 1000000;  // 1 km = 1000000 mm

    // Print the results with two decimal places for clarity
    printf("\nEquivalent distances:\n");
    printf("Meters: %.2lf m\n", meters);
    printf("Centimeters: %.2lf cm\n", centimeters);
    printf("Millimeters: %.2lf mm\n", millimeters);

    return 0;
}