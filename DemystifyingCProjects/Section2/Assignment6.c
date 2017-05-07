/*  Assignment6.c
    Any alphabet is entered through the keyboard. Write a program to print
    whether the alphabet is vowel or consonant.
*/

#include<stdio.h>

int main()
{
    char letter;

    printf("Please enter a lowercase letter: ");
    scanf("%c", &letter);

    if (letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117)
        printf("\nThe letter '%c' is a vowel\n", letter);
    else
        printf("\nThe letter '%c' is a consonant\n", letter);


    return 0;
}
