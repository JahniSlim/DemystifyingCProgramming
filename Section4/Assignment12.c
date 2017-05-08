/*  ..\Section4\Assignment12.c
    Write a C program to print sum of odd positive integers up to 75…

    Last Modified: 5/8/17 John Olson
*/

#include<stdio.h>

int main()
{
    int i, sum = 0;

    printf("This program simply prints the sum of odd positive integers up to 75\n\n");

    for(i = 1; i <= 75; i++)
    {
        if(i % 2 != 0)
            sum += i;
    }

    printf("%d", sum);

    return 0;
}
