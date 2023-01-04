/* Write a C program to calculate a bike’s average consumption from the given total distance
(integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).*/

#include <stdio.h>
int main()
{
    float dis, fuel, avg;
    printf("Enter the distance travelled in KM : ");
    scanf("%f", &dis);
    printf("Enter the fuel spent in Liters : ");
    scanf("%f", &fuel);

    avg = dis / fuel;

    printf("The bikes average is %.2f km/l.", avg);
}