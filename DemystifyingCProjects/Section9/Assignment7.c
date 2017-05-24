/*  ..\Section9\Assignment7.c
    A multi word string is input through the keyboard and a single word from the string itself is also taken from
    the user. For example a string entered is "She sells sea shells at the sea shore of pacific sea coast". Write a
    C program to find number of word "Sea" appears in a given string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
#define WRD_LEN 20

void AddEndSpace(char *);
void EraseString(char *);
int SearchString(const char *, const char *);

int main()
{
    char phrase[STR_LEN + 1];
    char word[WRD_LEN + 1];
    int num_of_occ = 0;

    printf("This program finds the number of occurrences of a user entered word in a user entered phrase\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);

    AddEndSpace(phrase);

    printf("Please enter a word to search for:\n");
    gets(word);

    num_of_occ = SearchString(word, phrase);

    printf("The word %s appears %d time(s) in the phrase.\n\n", word, num_of_occ);

    return 0;
}




void AddEndSpace(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        ++i;
    }
    s[i++] = ' ';
    s[i] = '\0';
}




void EraseString(char *p)
{
    for(; *p != '\0'; p++)
        *p = '\0';
}



int SearchString(const char *w, const char *p)
{

    char temp[WRD_LEN + 1] = " ", *t = temp;
    int count = 0;

    for(; *p != '\0'; p++)
    {
        *t++ = *p;

        if(*p == ' ')
        {
            *(--t) = '\0';

            if(strcmp(w, temp) == 0)
                ++count;

            EraseString(temp);
            t = &temp[0];
        }
    }

    return count;
}
