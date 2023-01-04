/*  Write a C program that accepts two item’s weight (floating points' values ) and
 number of purchase (floating points' values) and calculate the average value of the items. */

#include <stdio.h>
int main()
{
    float w1, w2;
    int a1, a2;
    float avg;
    printf("Weight of item 1 : ");
    scanf("%f", &w1);
    printf("\nNumber of item 1 : ");
    scanf("%d", &a1);
    printf("\nWeight of item 2 : ");
    scanf("%f", &w2);
    printf("\nNumber of item 2 : ");
    scanf("%d", &a2);

    avg = (w1 * a1 + w2 * a2) / a1 + a2;
    printf("The average value of the items is %f.", avg);
}