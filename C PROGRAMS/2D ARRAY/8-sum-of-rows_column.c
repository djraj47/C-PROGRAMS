// C program to find the sum of rows and column of a matrix.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10], i, n, j, sum, sun;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elments :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the %d & %d elements :", i + 1, j + 1);
            scanf("%d\t", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            a[i][n] = sum;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j <= n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
        printf("\n");
    for (j = 0; j < n; j++)
    {
        sun = 0;
        for (i = 0; i < n; i++)
        {
            sun = sun + a[i][j];
        }
            printf("%d\t",sun);
    }
}