#include<stdio.h>
int main()
{
    int a[10],n,i,j,count;
    printf("Enter the size of the array :-");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter the element %d :-",i);
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        count=0;
        for ( j = 0 ; j < n; j++)
        {
            if(a[i]==a[j])
            count++;
        }
            if(count>n/2)
            {
            printf("\n%d has the majority elements .",a[i]);
            break;
            }
            else if(count<=n/2)
            {
            printf("\nThere are no majority elements.");
            break;
            }
        
    }

}
    
    

