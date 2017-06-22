/* ..\Section4\Assignment3.c
    Write a program to print factorial of any positive integer entered by the user through the keyboard.

    Last Updated: 5/3/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num;
    long int fact;
    int i;
    char reload;

    printf("This program prints the factorial of a user entered integer\n\n");

    do{
        fact = 1;

        printf("Please enter an integer to see its factorial: ");
        scanf("%d", &num);

        for(i = num; i > 0; i--)
            fact *= i;
        printf("Factorial: %d\n\n", fact);

        printf("Would you like to reload the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
