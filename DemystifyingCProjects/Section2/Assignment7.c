/*  Assignment7.c
    Any character is input through the keyboard. Write a C program to determine
    whether the character is small case alphabet, capital letter, a digit or a
    special symbol.
*/

#include<stdio.h>

int main()
{
    char ch;
    int flag = 1;

    printf("Please enter any character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
    {
        printf("\nThe character '%c' is a special character\n", ch);
        flag = 0;
    }
    if (ch >= 65 && ch <= 90)
    {
        printf("\nThe character '%c' is a capital letter\n", ch);
        flag = 0;
    }
    if (ch >= 97 && ch <= 122)
    {
        printf("\nThe character '%c' is a lowercase letter\n", ch);
        flag = 0;
    }
    if(flag)
        printf("The character %c is a special character\n",ch);
    return 0;
}
