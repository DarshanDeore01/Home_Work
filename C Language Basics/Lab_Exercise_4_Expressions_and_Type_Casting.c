// Lab Exercise 4

// Objective
// Use expressions and type casting

// Problem Statement
// Write a program to accept marks of 5 subjects from the user and calculate their average.
// Use implicit and explicit type conversion.

#include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    float average;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    // Using implicit type conversion
    average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;
    printf("Average (implicit): %.2f\n", average);

    // Using explicit type conversion
    average = (float)(mark1 + mark2 + mark3 + mark4 + mark5) / 5;
    printf("Average (explicit): %.2f\n", average);

    return 0;
}
