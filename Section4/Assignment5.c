/* ..\Section4\Assignment5.c
    Two integer numbers are input through the keyboard. Write a C program to print one number
    raised to other number. For example if user enters 4 and 3 then output should be 4 raised
    to 3.

    Last Modified: 5/3/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num, n, product;
    int i;
    char reload;

    printf("This program raises an integer to an exponential power\n\n");

    do{
        product = 1;

        printf("Please enter an integer: ");
        scanf("%d", &num);

        printf("\nPlease enter an exponent: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++)
            product *= num;

        printf("Result: %d\n\n", product);

        printf("Would you like to restart the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
