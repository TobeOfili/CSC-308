#include <stdio.h>

int main() {
    char input;

    // Prompt the user to enter a character between A and J
    printf("Enter a character between A and J: ");
    scanf(" %c", &input);  // The space before %c is used to ignore any preceding whitespace

    // Check if the entered character is between A and J
    if (input >= 'A' && input <= 'J') {
        printf("The next 6 characters are: ");
        for (int i = 1; i <= 6; i++) {
            printf("%c ", input + i);
        }
        printf("\n");
    } else {
        printf("Invalid input! Please enter a character between A and J.\n");
    }

    return 0;
}
