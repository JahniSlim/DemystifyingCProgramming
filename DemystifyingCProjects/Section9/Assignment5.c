/*  ..\Section9\Assignment5.c
    A multi word string is entered through the keyboard. Write a C program using function to find the
    largest and smallest word in a given string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
#define WRD_LEN 20

void AddEndSpace(char *);
void EraseString(char *);
void FindWords(char a[], char *, char *);

int main()
{
    char phrase[STR_LEN + 1];
    char largest[WRD_LEN + 1] = " ", smallest[WRD_LEN + 1];
    int i;

    for(i = 0; i < WRD_LEN; i++)     //This snippet fills the smallest string with characters so that there is
        smallest[i++] = ' ';    //something to compare a less than operator '<' to
    smallest[i] = '\0';


    printf("This program finds the largest and smallest word in a phrase\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);
    AddEndSpace(phrase);

    FindWords(phrase, largest, smallest);

    printf("The largest word is '%s'\n", largest);
    printf("The smallest word is '%s'\n\n", smallest);

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


void FindWords(char *a, char *l_word, char *s_word)
{
    char temp[WRD_LEN + 1] = " ", *t = temp;

    for(; *a != '\0'; a++)
    {
        *t++ = *a;

        if(*a == ' ')
        {
            if(strlen(temp) > strlen(l_word))
                strcpy(l_word, temp);

            if(strlen(temp) < strlen(s_word))
                strcpy(s_word, temp);

            EraseString(temp);
            t = &temp[0];
        }
    }

    printf("%s\n", temp);
}
