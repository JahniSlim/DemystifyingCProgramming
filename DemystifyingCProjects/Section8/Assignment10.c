/*  ..\Section8\Assignment10.c
    Write a C program to accept an array and reverse it using pointers.

    Last Modified: 5/23/17 John Olson
*/

#include<stdio.h>
#define N 10

int main()
{
    int arr[N], *p;

    printf("This program reverses a series of numbers");

    printf("Please enter %d numbers: ", N);
    for(p = arr; p < arr + N; p++)
        scanf("%d", p);

    printf("\n");

    printf("The reverse order of the series:\n");
    for(p = arr + N - 1; p >= arr; p--)
        printf("%d  ", *p);

    printf("\n\n");

    return 0;
}
