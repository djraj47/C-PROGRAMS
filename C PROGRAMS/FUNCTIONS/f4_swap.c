// C program to swap 2 numbers using functions.

#include<stdio.h>
#include<conio.h>
void swap(int,int);    // function declaration 
int main()
{
    int i,j;
    printf("enter first number :");
    scanf("%d",&i);
    printf("enter second number :");
    scanf("%d",&j);
    swap(i,j);
    return 0;
}
 void swap (int i, int j)     // function definaton
 {
     int c;
     c=i;
     i=j;
     j=c;
     printf("The 1st number is %d and second number is %d after swapping .",i,j);

 }