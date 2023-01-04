#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i, b[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("the elemnts of a : ");
       
            for (i = 0; i < 5; i++)
        
            printf(" %d", a[i]);

            for (i = 0; i < 5; i++)
        
                b[i] = a[i];

    printf("\n the elements of b :");
            
            for (i = 0; i < 5; i++)
            {
               printf(" %d", b[i]);
            }
    return 0;
}