/*  ..\Section6\Assignment2.c
    Length and breadth of rectangle are input through the keyboard. Write a C program using function to
    calculate and print area of rectangle.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
int findArea(int a, int b);

int main()
{
    int l, w, area;

    printf("This program finds the area of a rectangle\n\n");

    printf("Please enter the length: ");
    scanf("%d", &l);

    printf("Please enter the width: ");
    scanf("%d,", &w);

    area = findArea(l, w);

    printf("The area is %d squared\n", area);

    return 0;
}

int findArea(int a, int b)
{
    int result;
    result = a * b;
    return result;
}
