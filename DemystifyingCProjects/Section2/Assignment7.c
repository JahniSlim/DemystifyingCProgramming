/*  Assignment7.c
    Any character is input through the keyboard. Write a C program to determine
    whether the character is small case alphabet, capital letter, a digit or a
    special symbol.
*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Please enter any character: ");
    scanf("%c", &ch);

    if (ch >= 33 && ch <= 64)
        printf("\nThe character '%c' is a special character\n", ch);
    if (ch >= 65 && ch <= 90)
        printf("\nThe character '%c' is a capital letter\n", ch);
    if (ch >= 97 && ch <= 122)
        printf("\nThe character '%c' is a lowercase letter\n", ch);

    return 0;
}
