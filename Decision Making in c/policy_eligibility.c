// Accept age and gender(in the form of character m' or 'f') from the user.
// If the age is greater than 25 and gender is 'f---> eligible for Policy 1 If the 
// age is greater than 25 and gender is 'm'> 
// eligible for Policy 2 others -> eligible for Policy 3 

#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter age and gender (m/f): ");
    scanf("%d %c", &age, &gender);

    if (age > 25) {
        if (gender == 'm')
            printf("Eligible for Policy 2.\n");
        else if (gender == 'f')
            printf("Eligible for Policy 1.\n");
        else
            printf("Eligible for Policy 3.\n");
    } else {
        printf("Eligible for Policy 3.\n");
    }

    return 0;
}
