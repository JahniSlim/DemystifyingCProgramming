/*  ..\Section5\Assignment6.c
    Modify above program so that program will run as many times as user wishes. When user wants to stop
    running the program he should be able to stop.

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    char ch;            //user entered lowercase letter

    printf("This program takes a user entered letter of the alphabet and prints whether it's a consonant\nor a vowel\n\n");

    do{
        do{
            printf("Please enter a lowercase letter, or 'X' to quit: ");
            scanf(" %c", &ch);
        }while((ch < 97 || ch > 122)  && ch != 'X');

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
            case 'X' :
                return 0;
            default :
                printf("%c is a consonant.\n\n", ch);
        }
    }while(1);
}
