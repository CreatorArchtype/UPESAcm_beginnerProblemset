// C program to print Hello World ! message along with the name given by the user.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100]; // Buffer to store user's name
    int valid;       // Flag to check if the input is valid

    while (1) {
        printf("Enter your name (letters only): ");
        scanf("%s", name);

        valid = 1; // Assume input is valid unless proven otherwise

        // Check each character to ensure it's a letter
        for (int i = 0; i < strlen(name); i++) {
            if (!isalpha(name[i])) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter letters only, no numbers or symbols.\n");
        }
    }

    // Print the message
    printf("Hello World, %s!\n", name);

    return 0;
}
