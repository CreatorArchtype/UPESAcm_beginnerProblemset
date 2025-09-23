// C program to print if a number is even or odd using the ternary operator.

# include <stdio.h>

int main(){
    int num;
    int result;

   // Input validation loop for num.
    while (1) {
        printf("Enter a number: ");
        result = scanf(" %d", &num);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
    // Ternary operator implemantation. 
    (num % 2 == 0) ? printf("The number is even") : printf("The number is odd");
    
    return 0;

}