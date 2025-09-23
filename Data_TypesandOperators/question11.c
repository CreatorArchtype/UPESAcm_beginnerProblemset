// C program to input any character and display its ASCII value.

#include <stdio.h>

int main(){

    char ch;
    int result;
    

    // Input validation loop for the character.
    while (1) {
        printf("Enter the character: ");
        result = scanf(" %c", &ch);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid character.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Printing the ASCII value of the character.
    printf("The ASCII value of the character is: %d\n", ch);

    return 0;
}