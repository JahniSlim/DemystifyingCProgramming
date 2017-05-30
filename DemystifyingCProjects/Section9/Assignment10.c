/*  ..\Section9\Assignment10.c
    A multi word string is input through the keyboard. Write a C program to search a particular word in a
    string and replace it by other word suggested by the user.

    Last Modified: 5/30/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
void WordReplace(char *, char *, char *);


int main()
{
    char phrase[STR_LEN + 1], search_word[STR_LEN + 1], replace_word[STR_LEN + 1];


    printf("This program finds and replaces a word in a user defined phrase\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);

    printf("Please enter a word to replace: ");
    gets(search_word);

    printf("Please enter a word to replace %s with: ", search_word);
    gets(replace_word);

    WordReplace(phrase, search_word, replace_word);

    return 0;
}




void WordReplace(char *p1, char *p2, char *p3)
{
    char new_phrase[STR_LEN + 1], *q;

    q = strstr(p1, p2);

    if(q != NULL)
    {
        memcpy(new_phrase, p1, q - p1);

        memcpy(new_phrase + (q - p1), p3, strlen(p3));

        strcpy(new_phrase + (q - p1) + strlen(p3), q + strlen(p2));

        puts(new_phrase);
    }
    else
        puts(p1);
}
