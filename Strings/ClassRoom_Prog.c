/* #include <stdio.h>
#define Size 25 */
/* int main()
{
    char Name[Size];
    int n, i;
    printf("\n Enter No of Characters : ");
    scanf("%d", &n);
    printf("\n Enter Name : ");
    //fflush (stdin);
    for (i = 0; i < n; i = i + 1)
    {
        scanf(" %c", &Name[i]);
    }
    Name[i] = '\0';

    printf("\nEntered Name : ",Name[i]);
    for (i = 0; Name[i] != '\0'; i = i + 1)
    {
        printf("%c", Name[i]);
    }

    printf("\n\n");
    return 0;
}*/

// Accepting and Displaying String with "%s" Format Specifier

/* int main()
 {
    char Name[Size];
    int n, i;

    printf("\n Enter Name: ");
    scanf("%s", Name); // Use %s format specifier to read the string

    printf("\nEntered Name: %s", Name); // Use %s format specifier to  print the string
    printf("\n\n");

    return 0;
}*/

// Accepting and Displaying String with Using gets() and puts()

/* int main()
{
    char Name[Size];

    printf("\nEnter Name: ");
    gets(Name); // Use gets() to accept a string

    printf("\nEntered Name: ");
    puts(Name); // Use puts() to display the string

    printf("\n\n");

    return 0;
}
*/

/* 
// string.h
// strcpy - Copies one string into another 
#include <stdio.h>
#include <string.h> // Include string.h for string function
#define Size 25

int main() 
{
    char Name[Size];
    char CopiedName[Size];

    printf("\nEnter Name: ");
    gets(Name);

    strcpy(CopiedName, Name); // Copy the string from Name to CopiedName using strcpy

    printf("\nCopied Name: ");
    puts(CopiedName);

    printf("\n\n");
    
    return 0;
} 
*/


// strcat = Merged two Strings & Merging always in 1st String

/* #include <stdio.h>
#include <string.h> // Include string.h for string functions
#define Size 25

int main() {
    char Name[Size];
    char LastName[Size];
    char FullName[Size * 2]; 

    printf("\nEnter First Name: ");
    gets(Name);

    printf("Enter Last Name: ");
    gets(LastName);

    strcat(Name, LastName); // Merge the last name to FullName

    printf("\nFull Name: ");
    puts(FullName);

    printf("\n\n");
    
    return 0;
} */


// strcmp = compares 2 Strings Return value 1,-1,0
/*
#include <stdio.h>
#include <string.h> // Include string.h for string functions
#define Size 25

int main()
{
    char Name1[Size];
    char Name2[Size];

    printf("\nEnter First Name: ");
    gets(Name1);

    printf("Enter Second Name: ");
    gets(Name2);

    int result = strcmp(Name1, Name2);

    if (result == 0)
    {
        printf("\n %s = %s", Name1, Name2);
    }
    else if (result < 0)
    {
        printf("\n%s < %s ", Name1, Name2);
    }
    else
    {
        printf("\n%s > %s ", Name1, Name2);
    }

    printf("\n\n");

    return 0;
}
*/

/* 
// strrev = Reverse The String 

// Function to reverse a string
#include <stdio.h>
#include <string.h> // Include string.h for strlen function
#define Size 25

// Function to reverse a string

#include <stdio.h>
#include <string.h> // Include string.h for strlen function

void my_strrev(char *str) {
    int length = strlen(str);
    char temp;
    
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char Name1[Size]; 
    char Name2[Size]; 

    printf("Enter First Name: ");
    scanf("%s", Name1);

    printf("Enter Second Name: ");
    scanf("%s", Name2);

    // Reverse the first name
    my_strrev(Name1);

    // Reverse the second name
    my_strrev(Name2);

    printf("Reversed First Name: %s\n", Name1);
    printf("Reversed Second Name: %s\n", Name2);

    return 0;
}
*/
 // strlen - Returns the length of String

#include <stdio.h>
#include <string.h> // Include string.h for strlen function
#define Size 25
int main()
{
    char Name1[Size];
    char Name2[Size];

    printf("Enter First Name: ");
    gets(Name1);

    printf("Enter Second Name: ");
    gets(Name2);


    int length1 = strlen(Name1);
    int length2 = strlen(Name2);

    printf("Length of First Name: %d\n", length1);
    printf("Length of Second Name: %d\n", length2);

    return 0;
}
