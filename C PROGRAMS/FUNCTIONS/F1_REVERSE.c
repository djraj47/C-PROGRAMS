#include<stdio.h>
#include<conio.h>
void reverse(int);
int main ()
{
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    reverse(i);
    return 0;

}
void reverse(int i)
{
    int rev=0;
    while (i > 0)
    {
        rev = (rev * 10) + i % 10;
        i = i / 10;
    }
    printf("the reverse is %d .",rev);
    
    getch();
}