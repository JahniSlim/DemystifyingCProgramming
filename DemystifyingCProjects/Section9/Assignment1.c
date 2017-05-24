/*  ..\Section9\Assignment1.c
    A multi word string is input through the keyboard. Write a C program using function to convert
    lower case 	letter into upper case and upper case letters into lower case and print it.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#define STR_LEN 80
void SwitchCase(char s[]);

int main()
{
    char sentence[STR_LEN + 1];

    printf("This program converts all lowercase letters to uppercase and visa-versa of a user entered"
           "sentence\n\n");

    printf("Please enter a sentence:\n");
    gets(sentence);

    SwitchCase(sentence);

    printf("%s", sentence);

    return 0;

}

void SwitchCase(char *s)
{
    while(*s != '\0')
    {
        if(*s >= 65 && *s <= 90)
            *s += 32;
        else if(*s >= 97 && *s <= 122)
            *s -= 32;

        s++;
    }
}
