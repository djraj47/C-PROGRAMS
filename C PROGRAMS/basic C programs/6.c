// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>
#define PI 3.14
int main()
{
    int radius, area, perimeter;
    printf("Enter the radius :");
    scanf("%d", &radius);

    perimeter = 2 * PI * radius;
    printf("\nThe perimeter is %d units.", perimeter);

    area = PI * radius * radius;
    printf("\nThe area is %d square units.", area);
    return 0;
}