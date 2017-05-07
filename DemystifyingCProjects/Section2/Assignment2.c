/*  Assignment2.c
    Two integers are input through the keyboard. Write a program to print
    largest between two integers using if-else control structure.
*/

#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("\nEnter second integer: ");
    scanf("%d", &y);

    if (x == y)
        printf("\nThe two integers are equal\n");
    else
    {
        if (x > y)
            printf("\n%d is greater than %d\n", x, y);
        else
            printf("\n%d is greater than %d\n", y, x);
    }

    return 0;
}
