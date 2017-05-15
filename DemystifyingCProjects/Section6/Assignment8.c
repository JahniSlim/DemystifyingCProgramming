/*  ..\Section6\Assignment8.c
    Any integer is input from the keyboard. Write a function to reverse an integer and print using C
    language. For example if user enters 12323 then output should be 32321.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
int FindReverse(int);

int main()
{
    int num, reverse;

    printf("This program prints the reverse order of a user entered integer\n\n");

    while(1)
    {
        printf("Please enter an integer(0 to quit): ");
        scanf("%d", &num);

        if(num == 0)
            return 0;

        reverse = FindReverse(num);

        printf("\nThe reverse order is %d\n\n", reverse);
    }
}

int FindReverse(int n)      //Finally figured a much better way to do this! Find the digit, then erase it!
{
    int result = 0;

    while(n != 0)
    {
        result = result * 10;
        result = result + n % 10;
        n /= 10;
    }

    return result;
}
