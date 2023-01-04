// C program to find sum of right diagonals of a matrix.

#include <stdio.h>
int main()
{
    int a[20][20], n, i, j, sum = 0;
    printf("Enter the size of matrix :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element %d %d", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    printf("\nThe sum of right diagonals is %d", sum);
}