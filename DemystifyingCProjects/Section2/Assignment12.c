/*  Assignment12.c
    Write a program to convert and print given time in seconds into hours, minutes and
    seconds. For example if number of seconds entered are 90001 then output printed should
    be 25:00:1 and if 34 is entered by the user then output should be 0:0:34.
*/

#include<stdio.h>

int main()
{
    int time;

    printf("Please enter a number of seconds(time): ");
    scanf("%d", &time);

    printf("\n%d:%d:%d\n", time / 3600, (time - time / 3600 * 3600) / 60, time % 60);


    return 0;
}
