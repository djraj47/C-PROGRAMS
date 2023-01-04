/*  Write a C program to convert a given integer (in days) to years, months and days,
 assumes that all months have 30 days and all years have 365 days */

#include <stdio.h>
int main()
{
    int n, yrs, m, d;
    printf("Enter the days : ");
    scanf("%d", &n);

    yrs = n / 365;
    m = (n % 365) / 30;
    d = n - ((yrs * 365) + (m * 30));
    printf("%d Years \n", yrs);
    printf("%d Months \n", m);
    printf("%d Days", d);

    return 0;
}