/*  ..\Section5\Assignment1.c
    Write a C program to print day of the week. For example if user enters 1 out should be Monday, if
    user enters 6 the output should be Saturday…

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter a number 1 - 7 to print the corresponding day of the week: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1 :
            printf("Monday\n");
            break;
        case 2 :
            printf("Tuesday\n");
            break;
        case 3 :
            printf("Wednesday\n");
            break;
        case 4 :
            printf("Thursday\n");
            break;
        case 5 :
            printf("Friday\n");
            break;
        case 6 :
            printf("Saturday\n");
            break;
        case 7 :
            printf("Sunday\n");
            break;
    }

    return 0;
}

