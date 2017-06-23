/*  ..\Section8\Assignment5.c
    Write a C program to put even and odd numbers of an array in two different arrays.

    Last Modified: 5/19/17 John Olson
*/

#include<stdio.h>
#define N 10
void Redistribute(int a[], int *);

int main(void)
{
    int list[N + 1], split_index = 0, i;

    printf("This program separates even and odd numbers\n\n");

    for(;;)
    {
        for(i = 0; i < N; i++)
        {
            printf("Please enter a number (or -1 to exit): ");          // Usually in such kind of loop programmer does not give any facility to exit midway
            scanf("%d", &list[i]);

            if(list[i] == -1)
                return 0;
        }

        Redistribute(list, &split_index);

        printf("The even numbers are: \n");
        for(i = 0; i < split_index; i++)
            printf("%d  ", list[i]);

        printf("\n");

        printf("The odd numbers are: \n");
        for(i = split_index; i < N; i++)
            printf("%d  ", list[i]);

        printf("\n");
    }
}

void Redistribute(int a[], int *split)
{
    int i;

    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 == 0)
        {
            a[N + 1] = a[*split];
            a[*split] = a[i];
            a[i] = a[N + 1];
            ++*split;
        }
    }
}
