// C program to calculate grade based on marks.

# include <stdio.h>

int main(){

    double marks; // Variables for marks
    int result;

   // Input marks
    while (1){
        printf("Enter your marks: ");
        result = scanf("%lf", &marks);

        if(result == 1 && marks >= 0){
            break;
        } else {
            printf("Invalid input! Please enter correct marks.\n");
            while(getchar() != '\n'); // remove the invalid value from the buffer.
        }
    }
//if implementation for checking the category of the marks given by the user.
    if( marks >=90){
        printf("The grade of the student is: A\n");
    } 

    if(marks >= 75 && marks< 90){
        printf("The grade of the student is: B\n");
    } 
    
    if(marks >= 60 && marks< 75){
        printf("The grade of the student is: C\n");
    }


    if(marks<60){
        printf("The grade of the student is: D\n");
    }

    return 0;

} 