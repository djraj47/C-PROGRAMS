/* Write a C program to display following variables.
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Variable declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890; */

#include <stdio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a+c = %d\n", a + b);
    printf("x+c = %f\n", x + c);
    printf("dx+x = %f\n", dx + x);
    printf("((int)dx)+ax = %ld\n", ((int)dx) + ax);
    printf("a+x = %f \n", a + x);
    printf("s+b = %d \n", s + b);
    printf("ax+b = %ld\n", ax + b);
    printf("s+c = %hd\n", s + c);
    printf("ax+c = %ld\n", ax + c);
    printf("ax+ux = %lu\n", ax + ux);
    return 0;
}