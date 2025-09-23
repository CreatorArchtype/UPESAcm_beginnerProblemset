// C program to check eligibility to vote (age >=18) with a ternary operator.

#include <stdio.h>

int main(){

     int age;
     int result;
     
     // Input validation loop for a.
    while (1) {
        printf("Enter your age: ");
        result = scanf(" %d", &age);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid age.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
  

    // Ternary operator implemantation.
    (age >= 18 && age< 100) ? printf("The voter is eligible") : printf("The voter is not eligible");
    
    return 0;

} 