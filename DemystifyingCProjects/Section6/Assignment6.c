/*  ..\Section6\Assignment6.c
    Write a function factorial to calculate and print factorial of any number entered through the keyboard.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
unsigned int Factorial(int f);

int main()
{
    int n;
    unsigned int fact;      //even unsigned int doesn't allow you to see a factorial beyond 15 or so
                            //Trying to play around with different basic types
    printf("This program prints a user defined factorial\n\n");

    while(1)        //I hate using while(1) but I guess I'm experimenting with various ways to
    {               //give the user exit control
        printf("Please enter an integer (0 to quit): ");
        scanf("%d", &n);

        if (n == 0)
            return 0;

        fact = Factorial(n);

        printf("The factorial of %d is %d\n\n", n, fact);
    }
}

unsigned int Factorial(int f)
{
    int i, result;

    result = f;

    for(i = 1; i < f - 1; i++)
    {
        result *= (f - i);
    }

    return result;
}
