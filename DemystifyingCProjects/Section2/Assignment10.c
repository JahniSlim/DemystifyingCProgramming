/*  Assignment10.c
    
    Three integers are input through the keyboard. Write a C program to print largest
    among three numbers. (Use if-else control structure)
    
    For better understanding of nested if-else constructs I am expecting this prgoam to use only if-else and not use logical operators
    
    Can you modify the program?
*/

#include<stdio.h>

int main()
{
    int x, y, z;

    printf("Please enter an integer: ");
    scanf("%d", &x);
    printf("\nPlease enter another integer: ");
    scanf("%d", &y);
    printf("\nPlease enter another integer: ");
    scanf("%d", &z);

    if (x > y && x > z)
        printf("\nThe largest number is %d.\n", x);
    else
    {
        if (y > z)
            printf("\nThe largest number is %d.\n", y);
        else
            printf("\nThe largest number is %d.\n", z);
    }


    return 0;
}
