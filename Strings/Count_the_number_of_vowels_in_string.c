#include <stdio.h>
#include <string.h>
#define Size 50
int main()
{
    char str[Size];
    int vowels = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i = i + 1)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels= vowels +1;
        }
    }

    printf("Number of vowels: %d\n", vowels);

    return 0;
}
