// C program of multiplication of two Matrices of same size.

#include<conio.h>
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],sum,k,n,i,j;
    printf("enter the size of matrix :");
    scanf("%d",&n);

    printf("Enter first matrix :\n");
    for ( i = 0; i < n; i++)
    {
        for (  j=0; j<n ; j++)
        {
        printf("Enter the %d %d element:",i+1,j+1);
        scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second matrix :\n");
      for ( i = 0; i < n; i++)
    {
        for (  j=0; j<n ; j++)
       {
            printf("Enter the %d %d element:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        for (  j=0; j<n ; j++)
       {
           sum=0;
           for(k=0;k<n;k++)
           {
               sum=sum+a[i][k]*b[k][j];
               mul[i][j]=sum;
           }
       }
    }
    printf("\nThe multiplication of matrix is :");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for (  j=0; j<n ; j++)
       {
            printf("%d\t",mul[i][j]);
        }
    }
}