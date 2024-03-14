// Write a program to convert user entered character to its opposite case. Program should also flash an
// error message if the character entered by the user is not an alphabet.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    else if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    else
        printf("Error! Not an alphabet.\n");

    printf("Opposite case character: %c\n", ch);

    return 0;
}
