// C program to check all prefect numbers in a given range

#include <stdio.h>
#include <conio.h>

void perfect(int, int);

int main()
{
    int x, y;

    printf("Enter a range :");
    scanf("%d%d", &x, &y);
    perfect(x, y);
    return 0;
}
void perfect(int x, int y)
{
    int sum, j;

    while(x<y)
    {
        sum=0;
        for (j = 1; j < x; j++)
        {
            
            if (x % j == 0)
            sum = sum + j;
        }

        if (sum == x)
        printf("\n%d", x);
        x++;
    }
}
