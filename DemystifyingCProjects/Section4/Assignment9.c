/*  ..\Section4\Assignment9.c
    Write a C program to calculate and print cube of a number entered by the user. Make a
    provision that user can enter as many numbers as he/she wants.

    Last Modified: 5/8/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num;
    char reload;

    printf("This program will print the cube of a user entered number\n\n");

    do{
        printf("Please enter a number to be cubed: ");
        scanf("%d", &num);

        printf("The cube of %d is %d\n\n", num, num * num * num);

        printf("Would you like to reload the program?");
        scanf(" %c", &reload);

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
