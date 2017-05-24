/*  ..\Section9\Assignment6.c
    Two strings, One string containing single word and other multi word string are input through the keyboard.
    Write a C program to determine whether first string is sub string of second string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
#define WRD_LEN 20

int StringSearch(const char *, const char *);

int main()
{
    char word[WRD_LEN + 1];
    char phrase[STR_LEN + 1];
    int result = 0;

    printf("This program determines if a single word entered by the user is found within a phrase also entered"
           "by the user\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);
    
    printf("Please enter a word to search for:\n");
    gets(word);

    result = StringSearch(word, phrase);

    if(result == 1)
        printf("'%s' is in the phrase\n\n", word);
    else
        printf("There are no occurrences of '%s' in the phrase\n\n", word);

    return 0;
}



int StringSearch(const char *w, const char *p)
{
    if(strstr(p, w) != NULL)
        return 1;
    
    return 0;
}
