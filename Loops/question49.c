// Display the table of squares for the first n numbers in C.

#include <stdio.h>

int main() {
    int number; // Variable to store the number entered by the user
    int i;      // Loop counter variable

    // Ask the user to enter a number
    printf("Enter a number to print till the number: ");
    scanf("%d", &number); // Read the number from user input

    // Print the multiplication table from 1 to 10
    printf("Square of %d:\n", number);

    // Use a for loop to iterate from 1 to n
    for (i = 1; i <= number; i++) {
        // Calculate and print the result of i * i (sqaure)
        printf("%d x %d = %d\n", i, i, i * i );
    }

    return 0; // Indicate that the program ended successfully
}
