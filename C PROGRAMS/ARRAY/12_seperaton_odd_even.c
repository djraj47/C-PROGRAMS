#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], b[10], c[10], n, i, j = 0, k = 0;
    printf("enter hte size of the array :");
    scanf("%d", &n);

    printf("enter the elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] != 0)
        {
            b[j] = a[i];
            j++;
        }
        else if (a[i] % 2 != 0 && a[i] != 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("\nthe even elements are :");
    for (i = 0; i < j; i++)
        printf(" %d", b[i]);
    printf("\nthe odd elements are :");
    for (i = 0; i < k; i++)
        printf(" %d", c[i]);
    
}