/*  Assignment11.c
    Three integers are input through the keyboard. Write a C program to print largest
    among three numbers. (Use ternary operators)
    
    This is one more interesting program wherein I expect to use only ternary operator and not use logical operators. 
    In C we term it as nesting of ternary operators. The program can be written only for the development of logic. Try it out. Else 
    I will modify the program
*/

#include<stdio.h>

int main()
{
    int x, y, z, max;

    printf("Please enter an integer: ");
    scanf("%d", &x);
    printf("\nPlease enter another integer: ");
    scanf("%d", &y);
    printf("\nPlease enter another integer: ");
    scanf("%d", &z);

    max = (x > y && x > z ? x : (y > z ? y : z));

    printf("\nThe largest number is %d.\n", max);


    return 0;
}
