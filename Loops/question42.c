//C program to reverse a number given by the user

#include <stdio.h>

int main(){
    int num1; int rev = 0; // Declaring variables for number by the user and for reversing it.
    int result;

    while(1)
    {
        printf("Enter the number of your choice (n > 0)"); //Taking number as an input by the user.
        result = scanf("%d", &num1);
        

        if (result == 1 && num1 > 0) {
            break; // Valid number entered, exit the loop
        } 
        else 
        {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }    
    
    }

    while (num1 > 0)
    {
        rev = rev*10 + (num1 % 10) ; // Reversing the number by splitting the number digit by digit.
        num1 /= 10; 
    }
    printf("The number after reversing is: %d\n ", rev);
    return 0;
    
}