// Lab Exercise 3
// Objectives
// Use escape sequences
// Use formatted input/output functions

// Problem Statement
// Write a program to print "WELCOME TO SEED" using escape sequences: \n, \t, \, \".

// Observe the differences in the output.
// Note: Do not use all the escape sequences only at the beginning or at the end of a sentence. 
// Their real purpose will be clear only if you try using them elsewhere in the statement 

#include <stdio.h>

int main() {
    printf("WELCOME TO SEED\n");

    // Using escape sequences within the string
    printf("WELCOME \tTO \tSEED\n");

    // Using escape sequences outside the string
    printf("WELCOME ");
    printf("\tTO ");
    printf("\tSEED\n");

    // Using \ and "
    printf("\"WELCOME TO SEED\"\n");

    return 0;
}
