// Enter date in dd/mm/yy format. Write a program to print total number of days in a month and
// the month in words.For example, if date is entered as 23/07/2009 then display the message as - July has 31 days.
// Your program should take care of leap years. 

#include <stdio.h>

int main() {
    int month, year, days;
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%*d/%d/%d", &month, &year);

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    printf("%s has %d days.\n", months[month - 1], days);

    return 0;
}
