/* ..\Section4\Assignment2.c
    Write a program to print sum of integers. At the beginning user will be asked how many numbers
    he is going to enter. The output should be sum of all numbers entered by the user. (For example
    if user enters 6 at the beginning, then user will be prompted to enter 6 integers)

    Last Modified: 5/3/17 John Olson
*/

#include<stdio.h>

int main()
{

    int num, response, total;
    int i;
    char reload;

    printf("This program prints a sum of the user's choice of a number of integers\n\n");
    do{
        do{
            printf("Please enter a number of integers to be totaled: ");
            scanf("%d", &num);
        }while(num < 0);

        total = 0;

        for(i = 1; i <= num; i++)
        {
            printf("Please enter integer %d: ", i);
            scanf("%d", &response);

            total += response;
        }

        printf("\nSum of integers: %d\n\n",total );

        printf("Would you like to reload the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
