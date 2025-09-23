// C program to read the sides of a triangle and calculate its area.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;   // sides of the triangle
    double s, area;   // semi-perimeter and area
    char ch;

    // Input validation loop for three sides
    while (1) {
        printf("Enter the three sides of the triangle: ");

        // scanf should successfully read 3 numbers
        if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
            break; 
        } else {
            // clear invalid input
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Invalid input! Please enter numeric values only.\n");
        }
    }

    // Check if sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate semi-perimeter
        s = (a + b + c) / 2.0;

        // Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        //Print the result
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
