// C program to find numbers of odd and even numbres in an Array .

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, even = 0, odd = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter numbers %d :", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if ((a[i] % 2 == 0) && (a[i] != 0))
            even++;
        else if ((a[i] % 2 != 0) && (a[i] != 0))
            odd++;
    }
    printf("%d even number and %d odd numbers .", even, odd);

    return 0;
}