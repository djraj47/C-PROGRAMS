// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
#include <stdio.h>
#include <conio.h>
int sum(int);
void main()
{
    int total;
    total = sum(1) / 1 + sum(2) / 2 + sum(3) / 3 + sum(4) / 4 + sum(5) / 5;
    printf("the total sum of the series is  %d .", total);
}
int sum(int z)
{
    int fact = 1, n;
    for (n = z; n > 0; n--)
    {
        fact = fact * n;
    }
    return fact;
}