#include <stdio.h>

int main() {
    char inputType;
    printf("Enter the type of input (c for character, i for integer, f for float): ");
    scanf(" %c", &inputType);

    switch (inputType) {
        case 'c': {
            char character;
            printf("Enter a character: ");
            scanf(" %c", &character);

            printf("Next 4 characters:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%c (ASCII: %d)\n", character + i, character + i);
            }
            printf("Size of character: %lu bytes\n", sizeof(character));
            break;
        }
        case 'i': {
            int number;
            printf("Enter an integer: ");
            scanf("%d", &number);

            printf("Next 4 integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                int result = number + (3 * i);
                printf("%d\n", result);
            }
            printf("Size of integer: %lu bytes\n", sizeof(number));
            break;
        }
        case 'f': {
            float number;
            printf("Enter a float: ");
            scanf("%f", &number);

            printf("Next 4 floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                float result = number + (3 * i);
                printf("%.2f\n", result);
            }
            printf("Size of float: %lu bytes\n", sizeof(number));
            break;
        }
        default:
            printf("Invalid input type! Please enter 'c', 'i', or 'f'.\n");
    }

    return 0;
}
