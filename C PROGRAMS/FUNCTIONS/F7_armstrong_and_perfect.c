// program to check armstrong and perfect number

#include <stdio.h>
#include <conio.h>
void arms(int);
void perf(int);
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    arms(num);
    perf(num);
    return 0;
}
void arms(int num)
{
    int num1,rem,sum=0;
    num1 = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if (num1 == sum)
        printf("\n%d is an armstrong number.",num1);
    else
         printf("\n%d is not an armstrong number.",num1);
}

void perf(int num)
{
    int sum = 0, i;
    for (i=1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        printf("\n%d is a perfect number.",num);
    else
        printf("\n%d is not a perfect number.",num);
}