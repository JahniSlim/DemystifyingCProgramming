/*  ..\Section9\Assignment3.c
    A multi word string is input through the keyboard. Write a C program to find number of vowels and
    consonants in a given string.

    Last Modified: 5/24/17 John Olson
*/

#include<stdio.h>
#define STR_LEN 80
int FindVowels(const char s[], int *);

int main()
{
    char sentence[STR_LEN + 1];
    int vowel_count = 0, consonant_count = 0;
    int *v = &vowel_count;


    printf("This program counts the number of vowels and consonants in a sentence\n\n");

    printf("Please enter a sentence:\n");
    gets(sentence);

    consonant_count = FindVowels(sentence, v);

    printf("There are %d vowels and %d consonants\n\n", vowel_count, consonant_count);

    return 0;
}

int FindVowels(const char *s, int *vow)
{
    char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int i, char_count= 0;


    for(; *s != '\0'; s++)
    {
        for(i = 0; i < 10; i++)
        {
            if(*s == vowels[i])
                ++*vow;
        }

        if(*s != ' ')
            ++char_count;
    }

   return char_count - *vow;
}
