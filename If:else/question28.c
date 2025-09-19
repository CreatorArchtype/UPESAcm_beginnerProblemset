// C program to input a month number and print the number of days in that month.

#include <stdio.h>

int main()

{
    int ch;
    int result;

    // Input choice
    while (1){
        printf("Enter your choice: ");
        result = scanf("%d", &ch);

        if(result == 1 && ch > 0){
            break;
        } else {
            printf("Invalid input! Please enter correct choice.\n");
            while(getchar() != '\n'); // remove the invalid value from the buffer.
        }
    
    }
/*Switch implementation for choice given by the user such that 
    the user can get the month and the number of days in it.*/ 

    switch (ch)
    {    
    case 1:
        printf("January, 31");
        break;
 
    case 2:
        printf("Feburary, 28");
        break;
  
    case 3:
        printf("March, 30");
        break;

    case 4:
        printf("April, 31");
        break;
 
    case 5:
        printf("May, 30");
        break;
    
    case 6:
        printf("June, 31");
        break;

    case 7:
        printf("July, 30");
        break;

    case 8:
        printf("August, 31");
        break;

    case 9:
        printf("September, 30");
        break;
    
    case 10:
        printf("October, 31");
        break;

    case 11:
        printf("November, 30");
        break;
  
    case 12:
        printf("December, 31");
        break;
    default:
         printf("Invalid choice");
         break;   

    }
    return 0;
}