// program in C to find a pair with given sum in the array.

#include <stdio.h>
int main()
{
    int a[10], n, i, j, sum;
    printf("Enter the size of the array :-");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element :- ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nEnter the sum :-");
    scanf("%d", &sum);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (sum == a[i] + a[j])
                printf("\nThe sum can be caluculate by %d + %d ", a[i], a[j]);
        }
    }
}