#include <stdio.h>
#include <conio.h>
void oddeven(int);
int main()
{
    int i;
    printf("Enter a number :");
    scanf("%d", &i);
    oddeven(i);
    
    return 0;
}
void oddeven(int i)
{
    if ((i % 2 == 0) && (i != 0))
        printf("%d is even.", i);
    else if ((i % 2 != 0) && (i != 0))
        printf("%d is odd.", i);
    else
        printf("YOU ENTERED ZERO");
}