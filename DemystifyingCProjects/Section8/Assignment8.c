/*  ..\Section8\Assignment8.c
    Write a C program to delete a number from specified location from an array.

    Last Modified: 5/23/17 John Olson
*/

#include<stdio.h>
#define N 10

int main()
{
    int arr[N], *p = arr, loc;

    printf("This program deletes a number from a specified location from within an array\n\n");

    printf("Enter %d numbers: ", N);
    while(p < &arr[N])
        scanf("%d", p++);

    do{
        printf("Please enter the array element to delete (0 - %d)", N - 1);
        scanf("%d", &loc);
    }while(loc < 0 || loc >= N);

    arr[loc - 1] = 0;

    p = &arr[0];
    printf("The new array:\n\n");
    while(p < &arr[N])
        printf("%d  ", *p++);

    printf("\n\n");

    return 0;

}
