// Print all the first 100 even numbers.

#include <stdio.h>

int main(){
    

     for(int i = 0; i <= 100; i++){ // for loop implementation
           if(i % 2 == 0){ //if condition to check for even numbers between 0 to 100
            
             printf("%d\n", i);// Printing those numbers
           }
     }

     return 0;
}