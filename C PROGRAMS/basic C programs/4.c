/* Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'*/
#include <stdio.h>
int main()
{
    char c1 = 'X', c2 = 'M', c3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c.", c1, c2, c3, c3, c2, c1);
    return 0;
}