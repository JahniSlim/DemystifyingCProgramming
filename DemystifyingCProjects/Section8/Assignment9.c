/*  ..\Section8\Assignment9.c
    Write a C program to sort an array in ascending order.

    Last Modified: 5/23/17 John Olson
*/

#include<stdio.h>
#define N 10
void SortArray(int *);

int main()
{
    int arr[N], *p = arr;

    printf("This program gathers %d numbers and sorts them in ascending order\n\n", N);

    printf("Enter %d numbers: ", N);
    while(p < &arr[N])
        scanf("%d", p++);

    SortArray(arr);

    printf("In ascending order:\n\n");
    p = &arr[0];
    while(p < &arr[N])
        printf("%d  ", *p++);

    return 0;
}

void SortArray(int a[])
{
    int i, min, *q;

    for(i = 0; i < N; i++)
    {
        min = a[i];

        for(q = a + i; q < a + N ; q++)
        {
            if(*q < min)
            {
                min = *q;
                *q = a[i];
                a[i] = min;
            }
        }
    }
}
