/* Write a C program that accepts two integers from the user and
calculate the product of the two integers. */

#include <stdio.h>
int main()
{
    int i, j, product;
    printf("Enter two integers :");
    scanf("%d%d", &i, &j);
    product = i * j;
    printf("The product of the two integers %d and %d is %d.", i, j, product);
    return 0;
}