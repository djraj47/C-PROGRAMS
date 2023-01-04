// Write a program in C to check whether a given matrix is an identity matrix.

#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, count = 1;
    printf("Enter the size of the array :- ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Enter the element %d-%d :-", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is :-\n");
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
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 1 && a[j][i] != 0)
            {
                count = 0;
                break;
            }
        }
    }

    if (count == 1)
        printf("\nThe given matrix is an Identity matrix.");
    else
        printf("\nThe given matrix is not an Identity matrix.");
}
