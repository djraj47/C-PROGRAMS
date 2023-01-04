#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],n,i,j,max=0;
    printf("\n Please Enter number of elements in an array  : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter numbers of 1st array :");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
       {
        if(a[i]>a[j])
         max=a[i];
        // else
         // max=a[j];
       } 
    }
printf("%d",max);
}