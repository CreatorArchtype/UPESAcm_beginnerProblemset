// C program to take three numbers and print the largest one (nested if-else).

#include <stdio.h>

int main() {
    int num1, num2, num3; // Variables for numbers as an input. 
    int big; // Variable for storing the biggest number out of these 3.
    int result;

    // Input num1
    while(1){
        printf("Enter the first number: ");
        result = scanf("%d", &num1);
        if(result == 1 && num1 >= 0){
            break;
        } else {
            printf("Invalid input! Please enter a correct number.\n");
            while(getchar() != '\n');
        }
    }

    // Input num2
    while(1){
        printf("Enter the second number: ");
        result = scanf("%d", &num2);  
        if(result == 1 && num2 >= 0){
            break;
        } else {
            printf("Invalid input! Please enter a correct number.\n");
            while(getchar() != '\n');
        }
    }

    // Input num3
    while(1){
        printf("Enter the third number: ");
        result = scanf("%d", &num3);
        if(result == 1 && num3 >= 0){
            break;
        } else {
            printf("Invalid input! Please enter a correct number.\n");
            while(getchar() != '\n');
        }
    }

    // Find largest using nested if-else
    big = num1;

    if(num2 > big){
        big = num2;
    }

    if(num3 > big){
        big = num3;
    }

    printf("The largest number is: %d\n", big);

    return 0;
}