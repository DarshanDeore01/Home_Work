// Accept a number from user and find its absolute value. Absolute value is positive value. 
// Use conditional operator.



#include <stdio.h>

int main() {
    int num, abs_value;

    printf("Enter a number: ");
    scanf("%d", &num);

    abs_value = (num >= 0) ? num : -num;
    printf("Absolute value of %d is: %d\n", num, abs_value);

    return 0;
}
