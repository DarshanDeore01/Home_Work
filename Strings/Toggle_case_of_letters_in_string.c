#include <stdio.h>
#include <string.h>
#define Size 50

int main()
{
    char str[Size];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("\nModified string: %s\n", str);

    return 0;
}
