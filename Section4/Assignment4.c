/* ..\Section4\Assignment4.c
    Write a C program to print multiplication table for numbers 1 to 10

    Last Modified: 5/3/17 John Olson
*/

#include <stdio.h>

int main()
{
    int i, j;

    printf("This program prints a multiplication table from 1 to 10\n\n");

    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <=10; j++)
        {
            printf("%d\t", j * i);
        }

        printf("\n");
    }

    return 0;
}
