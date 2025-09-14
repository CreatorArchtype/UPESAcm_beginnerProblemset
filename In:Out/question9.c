// C program to Calculate and display a student’s average marks of five subjects.

#include <stdio.h>

int main() {
    double marks;      // Variable to store each subject's marks
    double sum = 0;    // To accumulate total marks
    int result;        // To check if input is valid

    // Loop to input marks for 5 subjects
    for (int i = 1; i <= 5; i++) {
        while (1) {
            printf("Enter marks for subject %d: ", i);
            result = scanf("%lf", &marks); // Read double input

            if (result == 1 && marks <= 100) {
                // If input is a valid double, exit the loop
                break;
            } else {
                // If input is invalid, print error message
                printf("Invalid input! Please enter a numeric value.\n");

                // Clear the invalid input from the buffer
                while (getchar() != '\n');
            }
        }

        // Add the valid marks to the sum
        sum += marks;
    }

    // Calculate the average
    double average = sum / 5.0;

    // Display the average
    printf("The average marks of the student are: %.2lf\n", average);

    return 0;
}
