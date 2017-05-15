/*  ..\Section6\Assignment10.c
    Two numbers are input through the keyboard. Write a function maxnum to determine
    which number is largest between two integers.

    Last Modified: 5/15/17 John Olson
*/

#include<stdio.h>
int MaxNum(int, int);

int main()
{
    int n1, n2, max;

    while(1)
    {
        printf("This program determines the largest of two integers\n\n");

        printf("Please enter the first integer (or 0 to exit)");
        scanf("%d", &n1);
        printf("Please enter the second number (or 0 to exit)");
        scanf("%d", &n2);

        if(n1 == 0 || n2 == 0)
            return 0;

        max = MaxNum(n1, n2);

        printf("The larger number is: %d\n\n", max);
    }
}

int MaxNum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
