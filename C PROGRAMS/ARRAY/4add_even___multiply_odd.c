// C program to add all even numbers and multiply all odd numbers in an Array.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, even = 0, odd = 1;
    for (i = 0; i < 10; i++)
    {
        printf("Enter numbers %d :", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if ((a[i] % 2 == 0) && (a[i] != 0))
            even = even + a[i];
        else if ((a[i] % 2 != 0) && (a[i] != 0))
            odd = odd * a[i];
    }
    printf("the sum of all even number is %d. \n The product of all odd numbers is %d.", even, odd);

    return 0;
}