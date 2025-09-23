// C program to accept a number and print its absolute value (no abs() function).

# include <stdio.h>

int main(){

    int num;
    int result;
    

    // Input validation loop for the number.
    while (1) {
        printf("Enter the number: ");
        result = scanf(" %d", &num);

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }
    
    // if implementation for absolute value.
    if(num < 0){
        num = -num;
    }
    // printing the absolute value of the number by the user.
    printf("The absolute value of the number is:%d\n", num);
    return 0;
}