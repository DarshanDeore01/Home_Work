// Write a program that accepts two numbers as numerator and denominator 
// from the user and display the quotient and remainder.

#include <stdio.h>

int main() {
    int numerator, denominator, quotient, remainder;

    printf("Enter the numerator and denominator: ");
    scanf("%d %d", &numerator, &denominator);

    quotient = numerator / denominator;
    remainder = numerator % denominator;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
