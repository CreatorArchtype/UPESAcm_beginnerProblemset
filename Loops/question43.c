//Find the number of digits of a number.

#include <stdio.h>

int main()
{
    int n, temp = 0, flag = 0;
    // Declaring variables for the number(n)
    int result;
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
    
    
    while(n > 0) //While loop implementation for counting the digits of the number
    {
        temp+=(n%10);
        n /= 10;
        flag+=1;
    }
    
    printf("The number of digits of the number is: %d\t", flag);
    
    return 0;
}
