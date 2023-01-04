// C program to print the transpos of a matrix.

#include <stdio.h>
int main()
{
  int a[20][20],b[20][20],n, i, j;
  printf("Enter the size of the array : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("Enter the element %d %d", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      b[j][i] = a[i][j];
  }
  for (i = 0; i < n; i++)
  {
    printf("\n");
    for (j = 0; j < n; j++)
      printf("%d ", b[i][j]);
  }
}
