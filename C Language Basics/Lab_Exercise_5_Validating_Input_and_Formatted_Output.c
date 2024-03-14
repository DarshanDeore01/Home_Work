//Lab Exercise 5

// Objectives
// Validating input
// Use formatted output

// Problem Statement
// Write a program to calculate the sum of digits of a user-entered number. Ensure that your program scans not more than 4 digits. 
// Also print the output in following manner
// For example, if the number is 1234, output should be 10.

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number (not more than 4 digits): ");
    scanf("%d", &num);

    // Validate input (not more than 4 digits)
    if (num >= 10000 || num <= -10000) {
        printf("Invalid input! Number should be less than 5 digits.\n");
    } else {
        // Calculate sum of digits
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        // Print output
        printf("Sum of digits: %d\n", sum);
    }

    return 0;
}
