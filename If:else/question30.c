/* C program to write  a calculator program using switch-case that adds, subtracts, multiplies, or divides
two numbers.*/

#include <stdio.h>
#include<stdlib.h>
int main(){
while (1)
{

   int choice, a,b ;
   int result;

   // Input validation loop for a.
    while (1) {
        printf("Enter a: ");
        result = scanf(" %d", &a);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
    
    // Input validation loop for b.
    while (1) {
        printf("Enter b: ");
        result = scanf(" %d", &b); 

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
   printf("----Menu----");
   printf("\nFor Addition (+) Press 1");
   printf("\nFor Subtraction (-) Press 2");
   printf("\nFor Multiplication (*) Press 3");
   printf("\nFor Division (/) Press 4");
   printf("\nFor Modulus (%%) Press 5");
   printf("\nExit--6");
   printf("\nEnter Choice");
   scanf("%d", &choice);


   switch(choice){
            case 1:
               printf( "%d", a + b);
               break;
            case  2:
               printf("%d", a - b);
               break;
            case 3:
               printf("%d", a * b);
               break;
            case 4:
               if(b==0){
                  printf("Error");
               }
               else{
                  printf("%d", a / b);
               }
               break;
            case 5:
                printf("%d", a % b);
                break;
            case 6:
                printf("Thank you");
                exit(0);
            default:
            printf("Invalid Number");
      
    }
  } 


   return 0;
}