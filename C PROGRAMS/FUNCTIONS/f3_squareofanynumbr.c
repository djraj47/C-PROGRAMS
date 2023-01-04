// C program to print the Square of a number using functions.

#include <stdio.h>
#include <conio.h>
int square(int);
int main()
{
    int i;
    printf("Enter a number :");
    scanf("%d", &i);
    square(i);
    return 0;
}
int square(int i)
{
    int x;
    x = i * i;
    printf("the sqaure of %d is %d .", i, x);
    return x;
}