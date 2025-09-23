// C program to find the result of a logical AND and OR operation using two boolean variables.


#include <stdio.h>

int main() {
    int x, y;   // use 0 for false, non-zero for true
    char ch;

    // Input validation loop
    while (1) {
        printf("Enter two boolean values (0 for false, 1 for true): ");
        if (scanf("%d %d", &x, &y) == 2) {
            break; // valid input
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF); // clear buffer
            printf("Invalid input! Please enter integers only (0 or 1).\n");
        }
    }

    // Logical AND and OR
    int andResult = x && y;
    int orResult = x || y;

    printf("Logical AND (%d && %d) = %d\n", x, y, andResult);
    printf("Logical OR (%d || %d) = %d\n", x, y, orResult);

    return 0;
}
