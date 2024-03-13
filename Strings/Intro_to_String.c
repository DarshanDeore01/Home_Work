#include <stdio.h>

int main()
{
    char str[] = {'D', 'A', 'R', 'S', 'H', 'A', 'N', '\0'};
    // char str [] = "DARSHAN";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("\n %c", *ptr);
        ptr = ptr+1;
    }

    printf("\n\n");
    return 0;
}