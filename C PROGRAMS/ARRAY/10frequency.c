// C program to count the feqrency of each element of an Array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,count;
    for(i=0;i<10;i++)
    { 
    printf("Enter the elements :");
    scanf("%d",&a[i]);
    }
   for(i=0;i<10;i++)
    {
        count=1;
        for ( j=i+1; j<10; j++)
        {
           if(a[i]==a[j])
           {count++;
           a[j]=0;
           }
        }
        if(a[i]!=0)
        printf("%d is %d times.\n",a[i],count);
    } 
getch();
}