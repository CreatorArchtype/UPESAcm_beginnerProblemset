// C program to check if a number is even or odd.

#include <stdio.h>

int main(){

    int num1;
    int result;

    while(1){

        printf("Enter the number of your choice:"); // Taking number as an input from the user
        result = scanf("%d", &num1);
        
           // If scanf returns 1, input is valid; otherwise, invalid input
        if(result == 1 && num1 >= 0 ){
            break;// Valid input entered, exit the loop
        } 
        else{
            printf("Invalid input! Please enter a correct number.\n");

             // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
         
    }

    if(num1 % 2== 0){ // If implementation to check if the number is even or odd.
        printf("The number is even.");
    } 
    else{
        printf("The number is odd.");
    }

    return 0;
}
