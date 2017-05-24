/*  ..\Section9\Assignment2.c
    A multi word string is input through the keyboard. Write a C program to count number of words in a given string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#define STR_LEN 80
int WordCount(const char s[]);

int main()
{
    char sentence[STR_LEN + 1];
    int num_words;

    printf("This program counts the number of words in a user entered string\n\n");

    printf("Please enter a sentence:\n");
    gets(sentence);

    num_words = WordCount(sentence);

    printf("There are %d words in the sentence\n\n", num_words);

    return 0;
}

int WordCount(const char *s)
{
    int count;

    for(; *s != '\0'; s++)
        if(*s == ' ')
            count++;

    return count;
}
