// Lab Exercise 8

// Objectives
// Use nested switch-case construct
// Use break statement

// Using a switch-case construct, write a menu driven program to perform basic calculations
// (addition, subtraction, multiplication and division) on two numbers accepted from the user.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char choice;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nMenu:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice (1-4): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '2':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '3':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
