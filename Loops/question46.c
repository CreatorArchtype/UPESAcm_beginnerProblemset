// C program to check for a given number is pallindrome or not.



#include <stdio.h>

int main()
{
    int num1; int rev = 0; // Declaring variables for number by the user and for reversing it.
    int result; // To check if the input is a valid integer
 
    int orig; // Variable for storing the original value of the number

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
    orig = num1;

    while (num1 > 0)
    {
        rev = rev*10 + (num1 % 10) ; // Reversing the number by splitting the number digit by digit.
        num1 /= 10; 
    }
    
    if(orig == rev){
        printf("The number is a Pallindrome");
    }
    else{
        printf("The number is not a Pallindrome");
    }

    return 0;
    
}