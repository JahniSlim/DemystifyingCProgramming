/*  ..\Section6\Assignmet11.c
    Three numbers are input through the keyboard. Write a function largest to determine
    which number is largest among 3 three numbers.

    Last Modified: 5/15/17 John Olson
*/

#include<stdio.h>
int MaxNum(int, int, int);

int main()
{
    int n1, n2, n3, max;

    while(1)
    {
        printf("This program determines the largest of three integers\n\n");

        printf("Please enter the first integer (or 0 to exit): ");
        scanf("%d", &n1);

        if(n1 == 0)
            return 0;

        printf("Please enter the second number: ");
        scanf("%d", &n2);
        printf("Please enter the third number: ");
        scanf("%d", &n3);

        max = MaxNum(n1, n2, n3);

        printf("The larger number is: %d\n\n", max);
    }
}

int MaxNum(int a, int b, int c)
{
    if(a > b)
        if(a > c)
            return a;
        else
            return c;
    else if (b > c)
        return b;
    else
        return c;
}
