// C program to print the area of a circle

# include <stdio.h>


int main(){
    double radius;
    double area;
    double pi = 3.14159;
    double result;
    // Loop until a valid radius is entered
    while (1) {
        printf("Enter the radius of the circle: ");
        result = scanf("%lf", &radius); // Try to read radius from user

        // If scanf returns 1, input is valid; otherwise, invalid input
        if (result == 1 && radius >= 0) {
            break; // Valid length entered, exit the loop
        } else {
            printf("Invalid input! Please enter a correct radius.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }
    area = radius * radius * pi; // Area of the circle

    printf("The Area of the circle is: %lf\n", area); // Printing Area of the circle
    return 0;


}