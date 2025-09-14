// Print the factorial of a number.

#include <stdio.h>

int main(){
     int n; int fact = 1;
     int result;

     while (1)
     {
      printf("Enter a positive number (n >= 0) of your choice: ");
      result = scanf("%d", &n);// Taking the value of N as input from the user

      // If scanf returns 1, input is valid; otherwise, invalid input
        if (result == 1 && n >= 0) {
            break; // Valid length entered, exit the loop
        } else {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }

     }
     
     
     for(int i = 1 ; i <= n; i++){ // for loop implementation
           fact*=i;
           //Multiplying the numbers to get the result as a factorial
     }
     printf("The factorial of the number is:%d\n", fact); // Printing the factorial Value
     return 0;
}