#include <stdio.h>

// Function to calculate the length of a string
size_t my_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++; // Increment the length until '\0' (null terminator) is encountered
    }
    return len; // Return the length of the string
}

// Function to copy a string from source to destination
char* my_strcpy(char *destination, const char *source) {
    size_t i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i]; // Copy each character from source to destination
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
    return destination; // Return the destination string
}

// Function to concatenate two strings
char* my_strcat(char *destination, const char *source) {
    size_t dest_len = my_strlen(destination); // Find the length of destination string
    size_t i = 0;
    while (source[i] != '\0') {
        destination[dest_len + i] = source[i]; // Append each character from source to destination
        i++;
    }
    destination[dest_len + i] = '\0'; // Null-terminate the destination string
    return destination; // Return the destination string
}

// Function to compare two strings lexicographically
int my_strcmp(const char *str1, const char *str2) {
    size_t i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Return the difference between the characters if they are not equal
        }
        i++;
    }
    return str1[i] - str2[i]; // Return the difference in lengths if one string is shorter than the other
}

// Function to reverse a string in place
char* my_strrev(char *str) {
    size_t len = my_strlen(str); // Find the length of the string
    size_t i = 0;
    size_t j = len - 1;
    while (i < j) {
        char temp = str[i]; // Swap characters from start to end until start surpasses end
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str; // Return the reversed string
}

int main() {
    char Name1[100], Name2[100];
    printf("Enter Name1: ");
    scanf("%s", Name1);
    printf("Enter Name2: ");
    scanf("%s", Name2);

    printf("Length of '%s': %zu\n", Name1, my_strlen(Name1));
    printf("Copying '%s' to Name2: %s\n", Name1, my_strcpy(Name2, Name1));
    printf("Concatenating '%s' and '%s': %s\n", Name1, Name2, my_strcat(Name1, Name2));
    int comparison_result = my_strcmp(Name1, Name2);
    if (comparison_result < 0) {
        printf("'%s' is less than '%s'\n", Name1, Name2);
    } else if (comparison_result > 0) {
        printf("'%s' is greater than '%s'\n", Name1, Name2);
    } else {
        printf("'%s' is equal to '%s'\n", Name1, Name2);
    }
    printf("Reversed '%s': %s\n", Name1, my_strrev(Name1));

    return 0;
}
