/*  Assignment5.c
    Any year is entered by the user through the keyboard. Write
    a C program to print whether the year is leap year or not.
*/

#include<stdio.h>

int main()
{
    int year;

    printf("Please enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0))
        printf("\nThe year %d is a leap year\n", year);
    else
        printf("\nThe year %d is not a leap year\n", year);

    return 0;
}
