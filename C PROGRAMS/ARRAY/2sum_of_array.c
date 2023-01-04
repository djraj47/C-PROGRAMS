// C program to add elements of an Array.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
        sum = sum + a[i];
    printf("The sum is %d", sum);

    return 0;
}
