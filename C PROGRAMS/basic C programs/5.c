/* Write a C program to compute the perimeter and area of a rectangle
with a height of 7 inches. and width of 5 inches. */

#include <stdio.h>
int main()
{
    int h = 7, w = 5, area, perimeter;
    perimeter = 2 * (h + w);
    printf("\nThe perimeter is %d inches.", perimeter);
    area = h * w;
    printf("\nThe area is %d inches.", area);
    return 0;
}