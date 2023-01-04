#include<stdio.h>
int main()
{
    int a[100],n,i,del,p,count=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    printf("Enter the elements :");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);

    }
    printf("Enter the index to delete :");   
    scanf("%d",&del);                        
    {
         for(i=del-1;i<n;i++)                        
            {
                a[i]=a[i+1];
            }
    }
     for(i=0;i<n-1;i++)
     printf("%d ",a[i]);
    }