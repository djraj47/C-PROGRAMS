//  C program to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,sap=0,nil=0;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
                printf("\nEnter the element %d-%d : ",i,j);
                scanf("%d",&a[i][j]);
        }    
    }
    printf("The matraix is :");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(a[i][j]==0)
            sap++;
            else
            nil++;
        }
    }
    if(sap>nil)
    {
       printf("\nIt is sparse matrix.");
    printf("\nThe number of zeroes are %d.",sap);
    }
    else
    printf("It is not a sparse matrix.");
}

    
