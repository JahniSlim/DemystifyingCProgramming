/*  ..\Section6\Assignment9.c
    Any year is entered though the keyboard. Write a function to print whether the year is a
    leap year or not.

    Last Modified: 5/15/17 John Olson
*/

#include<stdio.h>
int DecideIfLeap(int);

int main()
{
    int year, leap;

    printf("This program returns whether an entered year is a leap year or not\n\n");

    while(1)
    {
        printf("Please enter a year(or 0 to exit): ");
        scanf("%d", &year);

        if(year == 0)
            return 0;

        leap = DecideIfLeap(year);

        if(leap == 1)
            printf("The year %d is a leap year\n\n", year);
        else
            printf("The year %d is not a leap year\n\n", year);
    }
}

int DecideIfLeap(int n)
{
    if(n % 4 == 0)
    {
        if(n % 100 == 0 && n % 400 == 0)
            return 1;
        else if(n % 100 == 0)
            return 0;

        return 1;
    }
    else
        return 0;
}
