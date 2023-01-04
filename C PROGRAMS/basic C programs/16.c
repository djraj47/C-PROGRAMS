// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

#include <stdio.h>
int main()
{
    int amt, total;
    printf("Enter the amount : ");
    scanf("%d", &amt);

    total = amt / 100;
    printf("\n100 RS NOTES : %d", total);

    amt = amt - (total * 100);
    total = amt / 50;
    printf("\n 50 RS NOTES : %d", total);

    amt = amt - (total * 50);
    total = amt / 20;
    printf("\n 20 RS NOTES : %d", total);

    amt = amt - (total * 20);
    total = amt / 10;
    printf("\n 10 RS NOTES : %d", total);

    amt = amt - (total * 10);
    total = amt / 5;
    printf("\n   5 RS COIN : %d", total);

    amt = amt - (total * 5);
    total = amt / 2;
    printf("\n   2 RS COIN : %d", total);

    amt = amt - (total * 2);
    total = amt / 1;
    printf("\n   1 RS COIN : %d", total);

    return 0;
}