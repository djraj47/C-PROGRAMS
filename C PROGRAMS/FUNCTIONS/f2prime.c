#include <stdio.h>
#include <conio.h>
void prime(int);
int main()
{
    int i;
    printf("Enter a number :");
    scanf("%d", &i);
    prime(i);
    return 0;
}

void prime(int i)
{
    int x, count = 0;
    for (x = 1; x <= i; x++)
    {
        if (i % x == 0)
            count++;
    }
    if (count == 2)
        printf(" %d is a prime number .", i);
    else
        printf("%d is not a prime number .", i);
}