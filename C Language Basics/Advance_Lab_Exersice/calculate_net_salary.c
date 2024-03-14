// Write a program to calculate Net Salary of an employee. 
// Accept Basic Salary (BS) from the user.
// . HRA is 20% of BS.
// . DA is 40% of BS.
// . PF is 10% of Gross Salary.

#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, grossSalary, PF, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    HRA = 0.2 * basicSalary;
    DA = 0.4 * basicSalary;
    grossSalary = basicSalary + HRA + DA;
    PF = 0.1 * grossSalary;
    netSalary = grossSalary - PF;

    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
