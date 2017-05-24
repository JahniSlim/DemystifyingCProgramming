/*  ..\Section9\Assignment8.c
    A multi word string is input through the keyboard. Write a C program to reverse each word of the string and
    print it.

    Last Modified 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80
#define WRD_LEN 20

void AddEndSpace(char *);
void EraseString(char *);
void WordReverse(const char *);


int main()
{
    char phrase[STR_LEN + 1];

    printf("This program reverses each word within a user entered phrase\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);

    AddEndSpace(phrase);

    WordReverse(phrase);

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




void WordReverse(const char *p)
{
    char temp[WRD_LEN + 1] = " ", *t = temp;

    for(; *p != '\0'; p++)
    {
        *t++ = *p;

        if(*p == ' ')
        {
            *(--t) = '\0';

            printf("%s ", strrev(temp));

            EraseString(temp);
            t = &temp[0];
        }
    }
}
