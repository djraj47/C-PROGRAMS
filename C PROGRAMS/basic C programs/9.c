// Write a C program that accepts two integers from the user
// and calculate the sum of the two integers.

#include <stdio.h>
int main()
{
    int i, j, sum;
    printf("Enter two integers :");
    scanf("%d%d", &i, &j);
    sum = i + j;
    printf("The sum of the two integers %d and %d is %d.", i, j, sum);
    return 0;
}
