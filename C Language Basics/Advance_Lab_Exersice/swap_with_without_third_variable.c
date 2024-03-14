// Write a program to swap two variables using a third variable and 
// without using third variable.

#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int temp;

    // Using a third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using third variable): a = %d, b = %d\n", a, b);

    // Without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without using third variable): a = %d, b = %d\n", a, b);

    return 0;
}
