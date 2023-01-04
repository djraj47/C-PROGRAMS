// C program to print reverse of elemnts of an Array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3],i;
    for ( i=0; i<3 ; i++)
    {
        printf("Enter number %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=3-1; i>=0;i--)
    printf("\n%d",a[i]);
    return 0;
}
