
 // Print the following table for given data types. 
 // Student is expected to print the correct information for size, range and format specifier columns,

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("DATA TYPES\tSIZE\tRANGE\tFORMAT SPECIFIER\n");
    printf("char\t\t%lu\t%d to %d\t%%c\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int\t\t%lu\t%d to %d\t%%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float\t\t%lu\t%e to %e\t%%f\n", sizeof(float), -FLT_MAX, FLT_MAX);
    printf("double\t\t%lu\t%e to %e\t%%lf\n", sizeof(double), -DBL_MAX, DBL_MAX);
    printf("long int\t%lu\t%ld to %ld\t%%ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("long double\t%lu\t%Le to %Le\t%%Lf\n", sizeof(long double), -LDBL_MAX, LDBL_MAX);

    return 0;
}
