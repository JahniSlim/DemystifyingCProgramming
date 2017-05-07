/*  Assignment3.c
    Any integer is input through the keyboard. Write a C program to print
    whether number entered is even number or odd number.
*/

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    if (num % 2)        //if its odd, the remainder will be 1, or true
        printf("\n%d is odd\n", num);
    else                //if its even, the remainder will be 0, or false
        printf("\n%d is even\n", num);


    return 0;
}
