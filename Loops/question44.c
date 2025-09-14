//Find the sum of digits of an integer.


#include <stdio.h>


int main()
{
    int n, temp = 0;
    // Declaring variables for the number(n)
    int result;
    //Variable for checking if the user input is valid.
    while(1)
    {
          printf("Enter n (where n is >= 0):");//taking number (n) as input by the user
          result = scanf("%d", &n);
          if (result == 1 && n >= 0) {
            break; // Valid number entered, exit the loop
        } 
        else 
        {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }    
    
    }
    
    
    while(n > 0) //While loop implementation for adding the digits of the number
    {
        temp+=(n%10);
        n /= 10;
    }
    
    printf("The sum of digits of the number is: %d\t", temp);
    
    return 0;
}