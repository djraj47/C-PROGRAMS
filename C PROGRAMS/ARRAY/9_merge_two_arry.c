// C program to Merge two arrays of same size sorted in decending order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], b[100], i, j, n, p;

    // taking size of array.
    printf("\n Please Enter number of elements in an array  : ");
    scanf("%d", &n);
 

    // taking input from user and storing the values.

    for (i = 0; i < n; i++)
    {
        printf("Enter numbers of 1st array :");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter numbers of 2nd array :");
        scanf("%d", &b[i]);
    }
    
    // Merging both arrays into one array.

    for (i = n; i < n * 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i] = a[j];
            i++;
        }
    }

    // condition for descending loop.

    printf("Descending order is ");
    for (i = 0; i < n * 2; ++i)
    {
        for (j = i + 1; j < n * 2; ++j)
        {
            if (b[i] < b[j])     // if ascending change the sign .
            {
                p = b[i];
                b[i] = b[j];
                b[j] = p;
            }
        }
    }

    // printing the array.

    printf("The numbers in ascending order are :\n");
    for (i = 0; i < n * 2; ++i)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}