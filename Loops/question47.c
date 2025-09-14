// C  program to print the power of a number (base^exponent) without using pow().


# include <stdio.h>


int main()

{

    double num1;
    // Variable for storing the number by the user as input
    double power;
    double e = 1; 
    double result; // To check if the input is a valid integer
    while(1)
    {
        printf("Enter the number of your choice (n > 0)"); //Taking number as an input by the user.
        result = scanf("%lf", &num1);
        

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
        
        while(1)
    {
        printf("Enter the power of your choice (n >= 0)"); //Taking power as an input by the user.
        result = scanf("%lf", &power);
        

        if (result == 1 && power >= 0) {
            break; // Valid power entered, exit the loop
        } 
        else 
        {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
        
    }    
    
    for(int i = 1; i<=power; i++)// For loop implememtnato for computing.
    {
        e*=num1;
    }
    printf("The value of the expression is:%lf\n", e);// Printing the result. 
    return 0;
   
}    
  