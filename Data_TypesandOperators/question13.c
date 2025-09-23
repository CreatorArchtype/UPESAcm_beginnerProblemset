// C program to input a number and print its square and cube.

# include <stdio.h>

int main(){

    int num;
    int result;

    // Input validation loop for the number.
    while (1) {
        printf("Enter the number: ");
        result = scanf(" %d", &num);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Variables for square and cube
    int sq = num * num; 
    int cube = num * num * num;
    
    // Printing the square and cube of the number.
    printf("The square of the number is: %d\n", sq);
    printf("The cube of the number is: %d\n", cube);

    return 0;
} 
