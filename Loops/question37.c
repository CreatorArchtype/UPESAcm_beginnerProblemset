#include <stdio.h>

int main() {
    int number; // Variable to store the number entered by the user
    int i;      // Loop counter variable

    // Ask the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number); // Read the number from user input

    // Print the multiplication table from 1 to 10
    printf("Multiplication table of %d:\n", number);

    // Use a for loop to iterate from 1 to 10
    for (i = 1; i <= 10; i++) {
        // Calculate and print the result of number * i
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0; // Indicate that the program ended successfully
}
