// Write a program in C to accept two matrices and check whether they are equal

#include<stdio.h>
int main()

{
int a[10][10],b[10][10] ,n,i,j,count=0;
printf("Enter the size of the matrix :");
scanf("%d",&n);

printf("Enter the first matrix :\n");
for ( i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
       printf("Enter the element %d-%d :",i,j);
       scanf("%d",&a[i][j]);
    }

    printf("\nThe first matrix is :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
    }

printf("\nEnter the second matrix\n :");
for ( i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
       printf("Enter the element %d-%d :",i,j);
       scanf("%d",&b[i][j]);
    }    

    printf("\nThe second matrix is :");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", b[i][j]);
    }

for ( i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
      if(a[i][j]==b[i][j])
      count++;
    }        
        
if(n*n==count)
{
printf("\n***************************");
printf("\n* Two matrices are equal. *");
printf("\n***************************");
}
else
printf("\nTwo matrices are not equal.");
}