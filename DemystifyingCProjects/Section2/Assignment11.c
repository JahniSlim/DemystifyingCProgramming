/*  Assignment11.c
    Three integers are input through the keyboard. Write a C program to print largest
    among three numbers. (Use ternary operators)
*/

#include<stdio.h>

int main()
{
    int x, y, z, max;

    printf("Please enter an integer: ");
    scanf("%d", &x);
    printf("\nPlease enter another integer: ");
    scanf("%d", &y);
    printf("\nPlease enter another integer: ");
    scanf("%d", &z);

    max = (x > y && x > z ? x : (y > z ? y : z));

    printf("\nThe largest number is %d.\n", max);


    return 0;
}
