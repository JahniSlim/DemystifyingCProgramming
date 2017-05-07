/*  Assignment4.c
    Any integer is input through the keyboard. Write a C program
    to print whether number entered is positive number or negative
    number.
*/

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
        printf("\nZero is neither positive nor negative\n");
    else
    {
        if (num > 0)
            printf("\n%d is positive\n", num);
        else
            printf("\n%d is negative\n", num);
    }

    return 0;
}
