// C program to print a Matrix .

#include <conio.h>
#include <stdio.h>
int main()
{
    int a[10][10], n, i, j;
    printf("enter the size of matrix :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the %d %d element:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
    }
}