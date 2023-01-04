#include<stdio.h>
int main()
{
    int a[100],n,i,new,p,count=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    printf("Enter the elements :");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);

    }
    printf("Enter the new element :");
    scanf("%d",&new);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==new)
        {
            count++;                           
            p=i;                           
           {                                 
             while(p<n)                             
              {
                a[p]=a[p+1];
                p++;
              }
           }      
        }
    }
    for(i=0;i<n-count;i++)
    printf("%d ",a[i]);
}
