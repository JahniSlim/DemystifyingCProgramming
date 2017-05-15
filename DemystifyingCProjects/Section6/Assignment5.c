/*  ..\Section6\Assignment5.c
    An integer is input through the keyboard. Write a C program using function isoddeven() to
    determine whether the integer is odd or even. Modify program to take as many values as user wants
    to enter.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
int FindOddEven();

int main()
{
    int flag;

    printf("This program finds whether a number is odd or even\n\n");

    do{
        flag = FindOddEven();
    }while(flag != 0);

    return 0;
}

int FindOddEven()
{
    int n;

    printf("Please enter an integer, or 0 to exit: ");  //kinda weak using 0, but i'm not sure how to
    scanf("%d", &n);                                    //use scanf for a char like 'X' if i'm using %d

    if(n % 2 == 0 && n != 0)
    {
        printf("This number is even\n\n");
        return 1;
    }
    else if(n % 2 == 1)
    {
        printf("This number is odd\n\n");
        return 1;
    }
    else if(n == 0)
        return 0;

    return 1;
}
