/*  ..\Section4\Assignment6.c
    An integer is entered through the keyboard. Write a program to print whether number entered is
    prime or not.

    Last Modified: 5/3/17 John Olson
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num, i;
    bool prime;
    char reload;

    printf("This program tells the user whether a number is prime or not\n\n");

    do{
        prime = true;

        printf("Please enter a number: ");
        scanf("%d", &num);

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime == true)
            printf("%d is prime.\n\n", num);
        else
            printf("%d is not prime.\n\n", num);


        printf("Would you like to reload the program? ");
        scanf(" %c", &reload);

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
