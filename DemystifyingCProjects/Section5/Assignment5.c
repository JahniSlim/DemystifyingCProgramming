/*  ..\Section5\Assignment5.c
    An alphabet is entered through the keyboard. Write a program to print whether an alphabet is vowel
    or consonant.

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    char ch, reload;            //user entered lowercase letter


    do{
        printf("This program takes a user entered letter of the alphabet and prints whether it's a consonant\nor a vowel\n\n");

        do{
            printf("Please enter a lowercase letter: ");
            scanf(" %c", &ch);
        }while(ch < 97 || ch > 122);

        printf("\n");

        switch(ch)
        {
            case 'a' :
                printf("%c is a vowel.\n\n", ch);
                break;
            case 'e' :
                printf("%c is a vowel.\n\n", ch);
                break;
            case 'i' :
                printf("%c is a vowel.\n\n", ch);
                break;
            case 'o' :
                printf("%c is a vowel.\n\n", ch);
                break;
            case 'u' :
                printf("%c is a vowel.\n\n", ch);
                break;
            default :
                printf("%c is a consonant.\n\n", ch);
        }

        printf("Would you like to reload the program? ");
        scanf(" %c", &reload);
        printf("\n\n");

    }while(reload == 'y' || reload == 'Y');

    return 0;
}
