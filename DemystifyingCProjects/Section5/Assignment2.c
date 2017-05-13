/*  ..\Section5\Assignment2.c
    Write a menu driven program to print result of various operations on two integers. Two integers
    would be entered by the user and then user should be given prompt to select operation of his choice
    to perform on these two integers. The program should give output on the basis of choice selected by
    the user.
    For example if user enters 2 integers as 10 and 20 and asks for addition of two numbers then output
    should be 30. If he asks for multiplication of 2 integers then program should print 200 as output and
    so on…
    The program should run till user wishes…
    The menu options could be like Enter 1 for addition, 2 for multiplication etc.

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    int i, n1, n2;          //i for operator, n1 and n2 for the user entered integers
    char reload;

    do{
        printf("This program performs math on two user entered integers.\n\n");

        printf("1 = Addition\n2 = Subtraction\n3 = Multiplication\n\n");

        do{
            printf("Which operator would you like to use? (1-3) ");
            scanf("%d", &i);
        }while(i < 1 || i > 3);

        printf("\nEnter the first integer: ");
        scanf("%d", &n1);

        printf("\nEnter the second number: ");
        scanf("%d", &n2);

        printf("\n\n");

        switch(i)
        {
            case 1 :
                printf("The sum of %d and %d is %d\n\n", n1, n2, n1 + n2);
                break;
            case 2 :
                printf("The difference of %d and %d is %d\n\n", n1, n2, n1 - n2);
                break;
            case 3 :
                printf("The product of %d and %d is %d\n\n", n1, n2, n1 * n2);
                break;
        }

        printf("Would you like to restart the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
