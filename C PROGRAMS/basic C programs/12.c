/* Write a C program that accepts an employee's ID,
total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary (with two decimal places) of a particular month */

#include <stdio.h>
int main()
{
    int amt, hrs, id;
    float sal;
    printf("Enter the employers ID : ");
    scanf("%d", &id);
    printf("Enter the total worked hours : ");
    scanf("%d", &hrs);
    printf("Enter the salary amount/hr : ");
    scanf("%d", &amt);
    sal = amt * hrs;
    printf("\nEmployers ID : %d ", id);
    printf("\nSalary = $ %.2f", sal);
    return 0;
}