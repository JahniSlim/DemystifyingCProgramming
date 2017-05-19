
/*  ..\Section8\Assignment3.c
    Write a C program to find largest 2 numbers in a given array.

    Last Modified: 5/18/17 John Olson
*/

#include<stdio.h>
#define N 6
void FindLargest(int a[], int *, int *);

int main()
{
    int list[6], i;
    int max = 0, sec_max = 0;

    printf("This program finds the largest two integers in a user defined list of six integers\n\n");

    while(1)
    {
        for(i = 0; i < N; i++)
        {
            printf("Please enter an integer (or 0 to exit): ");
            scanf("%d", &list[i]);

            if(list[i] == 0)
                return 0;
        }

        FindLargest(list, &max, &sec_max);

        printf("The two largest integers are %d and %d\n\n", max, sec_max);
    }
}

void FindLargest(int a[], int *p1, int *p2)
{
    int i;

    for(i = 0; i < N; i++)
    {
        if(a[i] > *p1 && a[i] > *p2)
        {
            *p2 = *p1;
            *p1 = a[i];
        }
        else if(a[i] > *p2 && a[i] < *p1)
            *p2 = a[i];
    }
}
