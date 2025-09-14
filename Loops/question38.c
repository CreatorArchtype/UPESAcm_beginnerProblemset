// Print the sum of the first n natural numbers.

#include <stdio.h>

int main(){
     int n; int sum = 0;
     printf("Enter a positive number (n > 0) of your choice: ");
     scanf("%d", &n);// Taking the value of N as input from the user
     for(int i = 0; i <= n; i++){ // for loop implementation
           sum+=i;
           // Adding the Numbers in the sum variable 
     }
     printf("%d\n", sum); // Printing the sum
     return 0;
}