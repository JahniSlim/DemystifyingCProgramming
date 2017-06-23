
/*  ..\Section8\Assignment7.c
    Write a C program to delete the specified integer from an array

    Last Modified: 5/23/17 John Olson
*/

#include<stdio.h>
#define N 10

int main()
{
    int num, arr[N];
    int *p;

    printf("This program deletes a specific integer from a given array\n\n");

    for(;;)
    {
        printf("Enter the number to be deleted (or -1 to exit): ");
        scanf("%d", &num);

        if(num == -1)
            return 0;

        p = &arr[0];

        while(p < &arr[N])
        {
            if(*p == num)
                *p = 0;

            p++;
        }
    }
}
 
