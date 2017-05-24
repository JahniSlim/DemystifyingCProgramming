/*  ..\Section9\Assignment4.c
    A string containing single word is entered through the keyboard. Write a C program using user
    defined function to check whether the string is palindrome or not.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#include<string.h>
#define STR_LEN 80

void DeleteSpaces(char *);
int CheckPalindrome(const char a[]);

int main()
{
    char phrase[STR_LEN + 1];
    int result = 0;

    printf("This program checks if a phrase is a palindrome\n\n");

    printf("Please enter a phrase:\n");
    gets(phrase);

    result = CheckPalindrome(phrase);

    if(result == 1)
        printf("The phrase is a palindrome\n\n");
    else
        printf("The phrase is not a palindrome\n\n");

    return 0;
}




void DeleteSpaces(char *p)
{
    char *p2;

    for(; *p != '\0'; p++)
    {
        if(*p == ' ')
        {
            for(p2 = p; *p2 != '\0'; p2++)
            {
                *p2 = *(p2 + 1);
            }
        }
    }
}




int CheckPalindrome(const char *s)
{
    char s1[STR_LEN + 1];
    char s2[STR_LEN + 1];
    char *p1 = s1, *p2 = s2;

    strcpy(s1, s);
    strlwr(s1);

    DeleteSpaces(s1);

    strcpy(s2, s1);
    strrev(s2);

    while(*p1 != '\0')          //I could use:      if(strcmp(s1, s2) == 0) 
    {                           //                      return 1;
        if(*p1++ != *p2++)      //But I really like using combined * and ++ operators!
            return 0;           //Saves one more function call as well. Either way I'm glad it works
    }

    return 1;
}

