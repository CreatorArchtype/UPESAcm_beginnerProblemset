/* C program to print whether a number is 
positive, negative, or zero using the ternary operator.
*/

#include <stdio.h>

int main(){

    double number;
    int result;

    // Input validation loop for number.
    while (1) {
        printf("Enter the number: ");
        result = scanf(" %lf", &number);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Ternary operator implemantation. 
    (number > 0) ? printf(" The number is Positive.\n") :(number < 0) ? printf(" The number is Negative.\n") :printf(" The number is Zero.\n");

    return 0;

}