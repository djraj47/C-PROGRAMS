// C program to print or display upper triangular matrix.

#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,z=0;
    printf("Enter the size of matrix :");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
       for ( j = 0; j < n; j++)
       {
           printf("enter the element %d-%d",i,j);
           scanf("%d",&a[i][j]);
       }
       
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
          printf("%d\t",a[i][j]);   
        }
        
    }
    printf("\nthe matrix after transformation");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            if(i<=j)
            printf("%d\t",a[i][j]);
            else
            printf("%d\t",z);
        }
    }   
    return 0;
}