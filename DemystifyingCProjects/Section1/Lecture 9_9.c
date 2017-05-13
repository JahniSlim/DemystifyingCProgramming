
/*  ..\Section1\Lecture9_9.c
    A five digit number is entered by the user through the keyboard. Write a C program to reverse the
    number and print it.

    Last Modified: 5/12/17 John Olson
*/


#include<stdio.h>

int main()
{
    int num, d1, d2, d3, d4, d5;

    printf("Please enter a five digit number: ");
    scanf("%d", &num);

    d1 = num % 10;
    d2 = num % 100 / 10;
    d3 = num % 1000 / 100;
    d4 = num % 10000 / 1000;
    d5 = num % 100000  / 10000;

    num = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("Reverse order is: %d", num);

    return 0;
}
