// C program to print the larger number using an if statement.

# include <stdio.h>

int main(){

    int a,b,c;
    int result;

    // Input validation loop for a.
    while (1) {
        printf("Enter the first number: ");
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
        printf("Enter the second number: ");
        result = scanf(" %d", &b);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
    
    // if-else implementation for printing the bigger number.   
    if( a > b){
        printf("The bigger number is :%d\n", a);
    }
    else{
        printf("The bigger number is :%d\n", b);
    }

    return 0;

}