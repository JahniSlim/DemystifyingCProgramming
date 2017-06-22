/*  Assignment8.c
    Any integer is input through the keyboard. Write a C program to print whether
    number entered is even number or odd number. (Make use of ternary operator)
*/

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    printf("\nThe number %d is %s.\n", num, num % 2 ? "odd" : "even");


    return 0;
}
