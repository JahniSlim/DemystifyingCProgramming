
/*  ..\Section9\Assignment9.c
    A multi word string is input through the keyboard. Write a C program to delete repeated words in a string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
#define WRD_LEN 20

void AddEndSpace(char *);
void EraseString(char *);
void WordDelete(char *);

int main()
{
    char phrase[STR_LEN + 1];

    printf("This program deletes duplicate words within a user entered phrase\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);

    AddEndSpace(phrase);

    WordDelete(phrase);

    puts(phrase);

    return 0;
}




void AddEndSpace(char *s)
{
    int i = 0;

    while(s[i] != '\0')
        ++i;

    s[i++] = ' ';
    s[i] = '\0';
}




void EraseString(char *a)
{
    for(; *a != '\0'; a++)
        *a = '\0';
}




void WordDelete(char *p)
{
    char temp[WRD_LEN + 1] = " ", *t = temp;
    char *q;
    int i;

    for(; *p != '\0'; p++)
    {
        *t++ = *p;

        if(*p == ' ')
        {
            while(strstr(p, temp) != NULL)
            {
                q = strstr(p, temp);

                for(i = 0; i < strlen(temp); i++)
                    strcpy(q, q + 1);
            }

            EraseString(temp);
            t = &temp[0];
        }
    }
}
