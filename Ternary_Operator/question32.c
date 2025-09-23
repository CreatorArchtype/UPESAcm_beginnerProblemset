// C program to assign the maximum of two numbers using a ternary operator.

# include <stdio.h>

int main(){
    double a , b;
    int result;

   // Input validation loop for a.
    while (1) {
        printf("Enter the first number: ");
        result = scanf(" %lf", &a);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Input validation loop for b.
    while (1) {
        printf("Enter the secodn number: ");
        result = scanf(" %lf", &b);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }


    // Ternary operator implemantation. 
    (a > b) ? printf("The bigger number is: a ") : printf("The bigger number is: b ");

    return 0;

}    