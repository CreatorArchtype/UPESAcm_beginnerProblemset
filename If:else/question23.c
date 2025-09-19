//  C program to check if the user is a minor, adult, or senior citizen.

# include <stdio.h>

int main(){
    int age; // Variable for age of the user.
    int result;

   while(1){

        printf("Enter your age:"); // Taking age as an input from the user
        result = scanf("%d", &age);
        
        
           // If scanf returns 1, input is valid; otherwise, invalid input
        if(result == 1 && age >= 0 ){
            break;// Valid input entered, exit the loop
        } 
        else{
            printf("Invalid input! Please enter a correct age.\n");

             // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
         
    }

    if(age < 18){ // If statement implementation to check the age of the user.
        printf("The user is a minor.\n"); 
    }
    if(age>=18 && age< 60 ){
        printf("The user is an adult.\n ");
    }  
    if( age>60 && age<110){
        printf("The user is a senior citizen.\n");
    }
    return 0;

}    
