// C program to find factriol using recursion

#include <stdio.h>
#include <conio.h>
int fact(int);
int main()
{
    int n, result;
    printf("enter a number :");
    scanf("%d", &n);
    result = fact(n);
    printf("the factorial is %d", result);
    return 0;
}

int fact(int i)
{
    int f;
    if (i==0)
    return 1;
    f = i * fact(i - 1);  
    return f;
}
