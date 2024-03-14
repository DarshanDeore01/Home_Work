// Write a program to accept an empID and dept.No as numeric data and desigCode as character data.

#include <stdio.h>

int main() {
    int empID, deptNo;
    char desigCode;

    printf("Enter empID, deptNo, and desigCode: ");
    scanf("%d %d %c", &empID, &deptNo, &desigCode);

    printf("Employee with empID %d works in ", empID);
    switch (deptNo) {
        case 10:
            printf("Purchase");
            break;
        case 20:
            printf("Sales");
            break;
        case 30:
            printf("Production");
            break;
        case 40:
            printf("Marketing");
            break;
        case 50:
            printf("Accounts");
            break;
        default:
            printf("Unknown department");
    }
    printf(" department as a ");
    switch (desigCode) {
        case 'C':
            printf("Clerk.\n");
            break;
        case 'M':
            printf("Manager.\n");
            break;
        case 'A':
            printf("Analyst.\n");
            break;
        case 'S':
            printf("Sales-person.\n");
            break;
        case 'W':
            printf("Worker.\n");
            break;
        default:
            printf("Unknown designation.\n");
    }

    return 0;
}
