// Accept numerator and denominator from the user. Perform division and print result only if denominator is not zero.
// Else print a message that "Denominator cannot be zero".

#include <stdio.h>

int main() {
    int numerator, denominator;
    float result;

    printf("Enter numerator and denominator: ");
    scanf("%d %d", &numerator, &denominator);

    if (denominator != 0) {
        result = (float)numerator / denominator;
        printf("Result of division: %.2f\n", result);
    } else {
        printf("Denominator cannot be zero.\n");
    }

    return 0;
}
