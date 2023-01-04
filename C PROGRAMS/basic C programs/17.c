//  Write a C program to convert a given integer (in seconds) to hours, minutes and seconds

#include <stdio.h>
int main()
{
    int time, hrs, min, sec;
    printf("Enter the time in seconds :");
    scanf("%d", &time);

    hrs = time / 3600;
    min = (time % 3600) / 60;
    sec = time - (hrs * 3600 + min * 60);

    printf("H : M : S = %d : %d : %d", hrs, min, sec);
}