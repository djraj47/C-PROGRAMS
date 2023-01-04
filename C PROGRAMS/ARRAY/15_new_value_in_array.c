// Write a program in C to insert New value in the array (sorted list ).

#include<stdio.h>
int main()
{
    int a[10],n,new,i,p;
    printf("enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elemets :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the new element :");                   
    scanf("%d",&new);

    a[n]=0;
    p=n;
    for(i=0;i<n;i++)
    {
        if(a[n-1]<new)
        {
            a[n]=new;
            break;
        }
        else if(a[i]<new && a[i+1]>new)
        {
            while(i+1<p)
            {
                a[p]=a[p-1];
                p--;
            }
             a[i+1]=new;
             break;  
        }
    }
    
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
}