/*  ..\Section5\Assignment3.c
    Write above program by modifying the menu like A for addition, M for multiplication, S for subtraction
    etc.

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    int n1, n2;          //n1 and n2 for the user entered integers
    char ch, reload;        //ch used to store the operator

    do{
        printf("This program performs math on two user entered integers.\n\n");

        printf("A = Addition\nS = Subtraction\nM = Multiplication\n\n");

        do{
            printf("Which operator would you like to use? (A, S or M) ");
            scanf(" %c", &ch);
        }while(ch != 'A' && ch != 'S' && ch != 'M');

        printf("\nEnter the first integer: ");
        scanf("%d", &n1);

        printf("\nEnter the second number: ");
        scanf("%d", &n2);

        printf("\n\n");

        switch(ch)
        {
            case 'A' : case 'a':
                printf("The sum of %d and %d is %d\n\n", n1, n2, n1 + n2);
                break;
            case 'S' : case 's':
                printf("The difference of %d and %d is %d\n\n", n1, n2, n1 - n2);
                break;
            case 'M' : case 'm': 
                printf("The product of %d and %d is %d\n\n", n1, n2, n1 * n2);
                break;
        }

        printf("Would you like to restart the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
