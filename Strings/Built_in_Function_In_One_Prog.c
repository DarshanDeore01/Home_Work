#include <stdio.h>
#include <string.h> // Include string.h for string functions
#define Size 50

// Function to reverse a string
void my_strrev(char *str)
{
    int length = strlen(str);
    char temp;

    for (int i = 0; i < length / 2; i= i+1)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char Name1[Size];
    char Name2[Size];

    // Getting input from user
    printf("Enter First Name: ");
    gets(Name1);

    printf("Enter Second Name: ");
    gets(Name2);

    

    // strlen()
    int length1 = strlen(Name1);
    int length2 = strlen(Name2);

    printf("\nLength of First Name: %d\n", length1);
    printf("Length of Second Name: %d\n\n", length2);

    // strcpy()
    char CopiedName[Size];
    strcpy(CopiedName, Name1);
    printf("Copied Name1: %s\n\n", CopiedName);

    // strcat()
    strcat(Name1, Name2);
    printf("Concatenated Name1 and Name2: %s\n\n", Name1);

    // strcmp()
    int result = strcmp(Name1, Name2);
    if (result == 0)
    {
        printf("Name1 and Name2 are equal.\n\n");
    }
    else if (result < 0)
    {
        printf("Name1 is less than Name2.\n\n");
    }
    else
    {
        printf("Name1 is greater than Name2.\n\n");
    }

    // strrev()
    my_strrev(Name1);
    printf("Reversed Name1: %s\n", Name1);

    return 0;
}
