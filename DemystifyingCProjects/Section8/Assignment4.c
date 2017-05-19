/*  ..\Section8\Assignment4.c
    Write a C program to print second largest and smallest number in a given array.

    Last Modified: 5/18/17 John Olson
*/

#include<stdio.h>
#define N 6
void MinMax(int a[], int *, int *);


int main()
{
    int list[N], i, max, min;

    printf("This program finds the largest and smallest number out of 6 numbers\n\n");

    for(;;)
    {
        for(i = 0; i < N; i++)
        {
            printf("Please enter a number (or '-1' to exit): "); //still can't figure how to use an 'X' instead
            scanf("%d", &list[i]);

            if(list[i] == -1)
                return 0;
        }

        MinMax(list, &max, &min);

        printf("The largest number is %d\n", max);
        printf("The smallest number is %d\n", min);
    }
}

void MinMax(int a[], int *p1, int *p2)
{
    int i;

    *p1 = *p2 = a[0];

    for(i = 0; i < N; i++)
    {
        if(a[i] > *p1)
            *p1 = a[i];
        else if(a[i] < *p2)
            *p2 = a[i];
    }
}
