/* C program to  Take two numbers and display the 
result of all arithmetic operations (+, -, *, /, %).*/

# include <stdio.h>

int main(){

    int  a, b; // Variables for operands. 
    int result;

    // Input validation loop for a.
    while (1) {
        printf("Enter the first number: ");
        result = scanf(" %d", &a);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Input validation loop for b.
    while (1) {
        printf("Enter the second number: ");
        result = scanf(" %d", &b);

        if (result == 1 && b > 0) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
    
    // Declaring variables for operations.
    int sum  = a + b;
    int diff = a - b;
    int mult = a * b;
    int div = a / b;
    int mod = a % b;

    // Printing the result of those operations.
    printf("The sum of a and b is; %d\n ", sum);
    printf("The difference of a and b is; %d\n ", diff);
    printf("The product of a and b is; %d\n ", mult);
    printf("The division of a and b is; %d\n ", div);
    printf("The modulus of a and b is; %d\n ", mod);


    return 0;
}