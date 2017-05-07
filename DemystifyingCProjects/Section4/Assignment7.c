/*  ..\Section4\Assignment7.c
    Write a C program to print first n numbers of Fibonacci series where n is the value given by the
    user. For example if user enters 6 then output should be 0…1…1….2….3…..5

    Last Modified: 5/3/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num, i;
    int fib, fib1 = 0, fib2 = 1;
    char reload;

    printf("This program prints a user entered number of the Fibonacci series\n\n");

    do{
        printf("Enter number of Fibonacci sequence numbers to see: ");
        scanf("%d", &num);

        printf("\n%d..%d..", fib1, fib2);

        for(i = 1; i <= num - 2; i++)
        {
            fib = fib1 + fib2;
            printf("%d..", fib);

            fib1 = fib2;
            fib2 = fib;
        }

        printf("\n\nWould you like to restart the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');


    return 0;
}

