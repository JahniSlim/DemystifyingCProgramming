/*  Assignment9.c
    Two integers are input through the keyboard. Write a program to print largest
    between two integers using if-else control structure. (Make use of ternary operator)
*/

#include<stdio.h>

int main()
{
    int x, y, max;

    printf("Please enter an integer: ");
    scanf("%d", &x);
    printf("\nPlease enter a different integer: ");
    scanf("%d", &y);

    max = (x > y ? x : y);

    printf("\nThe larger number is %d\na", max);


    return 0;
}
