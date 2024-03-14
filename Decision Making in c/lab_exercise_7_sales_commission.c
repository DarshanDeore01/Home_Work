// Lab Exercise 7


// Objective
// Use nested if-else construct

// Problem Statement I Write a program to accept the basic salary and total sales amount for 
// a salesperson and calculate commission according to the sales amount. 
// Display the net salary and the commission earned. The range is as follows -

#include <stdio.h>

int main() {
    float basic_salary, sales_amount, commission, net_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter sales amount: ");
    scanf("%f", &sales_amount);

    if (sales_amount >= 15000)
        commission = sales_amount * 0.15;
    else if (sales_amount >= 10501)
        commission = sales_amount * 0.11;
    else if (sales_amount >= 7501)
        commission = sales_amount * 0.08;
    else if (sales_amount >= 5001)
        commission = sales_amount * 0.03;
    else
        commission = 0;

    net_salary = basic_salary + commission;

    printf("Net salary: %.2f\n", net_salary);
    printf("Commission earned: %.2f\n", commission);

    return 0;
}
