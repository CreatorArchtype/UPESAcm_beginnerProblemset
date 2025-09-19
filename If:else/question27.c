// C program to check whether the number is “Positive”, “Negative”, or “Zero”.

# include<stdio.h>

int main(){
    double num; // Variables for number.
    int result;

   // Loop validation
    while (1){
        printf("Enter the number:"); // Number as an input. 
        result = scanf("%lf", &num);

        if(result == 1){
            break;

        } else {
            printf("Invalid input! Please enter correct marks.\n");
            while(getchar() != '\n'); // Remove the invalid value from the buffer.
        }

    }
// Checking if the number is zero, positive or negative.
    if(num > 0){
        printf("The number is 'Positive'\n");
    } 
    if(num == 0){
        printf("The number is 'Zero'\n");
    }
    if(num<0){
        printf("The number is 'Negative'");
    }

    return 0;

}