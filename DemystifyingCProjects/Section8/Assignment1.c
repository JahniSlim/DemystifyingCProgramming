/*  ..\Section8\Assignment1.c
    Write a C program to sum and average of an array containing integers. Take integer input
    from user. User input may be positive or negative or zero. Sum of negative integers and
    positive integers should be printed separately. (Note: Write whole program in single
    function i.e. main function).function

    Last Modified: 5/16/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num[5], sum_pos, sum_neg;
    int i;

    printf("This program takes user input of integers and sums the positive numbers separately \nfrom the negative ones\n\n");

    while(1){

        sum_pos = 0;
        sum_neg = 0;

        for (i = 0; i < 5; i++)
        {
            printf("Please enter a positive or negative number (0 or 0 to quit): ");
            scanf("%d", &num[i]);

            if(num[i] == 0)
                return 0;
        }

        for(i = 1; i <= 5; i++)                     // I am doubtful about this loop construct. Have you checked the O/P?
        {
            if(num[i] > 0)
                sum_pos += num[i];
            else
                sum_neg += num[i];
        }

        printf("The sum of the positive integers is %d\n", sum_pos);
        printf("The sum of the negative integers is %d\n\n", sum_neg);
    }
}
