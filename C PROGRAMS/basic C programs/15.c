// Write a C program to calculate the distance between the two points.

#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float dis;
    printf("Enter the X-axis points : ");
    scanf("%d %d", &x1, &x2);
    printf("Enter the Y-axis points : ");
    scanf("%d %d", &y1, &y2);

    dis = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The distance is %.4f .", sqrt(dis));
    return 0;
}