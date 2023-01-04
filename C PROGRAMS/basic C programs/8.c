// Write a C program to convert specified days into years, weeks and days.

#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number is days : ");
    scanf("%d", &i);

    int years = i / 365;
    printf("\n%d Years", years);
    int weeks = (i % 365) / 7;
    printf("\n%d Months", weeks);
    int days = i - (years * 365 + weeks * 7);
    printf("\n%d Days", days);

    return 0;
}