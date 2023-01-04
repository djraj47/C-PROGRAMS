//  program in C to find the number occurring odd number of times in an array.

#include<stdio.h>
int main()
{
    int a[20],n,i,j,count;
    printf("Enter the size of arrary :-");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter element %d :-",i);
        scanf("%d",&a[i]);
    }

    printf("The array is :-\n ");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        count=0;
        for ( j = 0; j < n; j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count % 2 != 0)
        {
            printf("\nThe odd number %d is %d.",a[i],count);
            break;
        }

        
    }
    
    
}