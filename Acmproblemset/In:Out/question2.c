// Accepting a user’s name and print a message.

#include <stdio.h>

int main(){
    char name;
    int result;

    while(1){
        printf("Enter your name :");
        result = scanf("%c", &name);
        if (result == 1 ) {
            break; // Valid name entered, exit the loop
        } 
        else 
        {
            printf("Invalid input! Please enter an actual name.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }    
    }

    printf("Hello, %c\n", name );
    return 0;

}