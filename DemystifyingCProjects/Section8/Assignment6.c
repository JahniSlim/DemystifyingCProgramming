/*  ..\Section8\Assignment6.c
    Write a C program to insert an element at a specified position in a given array.

    Last Modified: 5/19/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num, loc = 0, arr[loc];

    printf("This program inserts an element at a specified position in a given array\n\n");

    for(;;)
    {
        printf("Enter the position in the array (or -1 to exit): ");
        scanf("%d", &loc);

        if(loc == -1)
            return 0;

        printf("Enter the integer to replace the given element location: ");
        scanf("%d", &num);

        arr[loc] = num;
 
        printf("%d\n\n", arr[loc]);
    }
}
