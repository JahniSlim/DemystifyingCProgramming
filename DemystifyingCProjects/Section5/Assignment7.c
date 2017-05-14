/*  ..\Section5\Assignment7.c
    Any positive integer is entered through the keyboard. Write a program to print the number in words…
    For example if 324 is entered through the keyboard, the output should be Three Two Four… and if 12354
    is entered through the keyboard the output would be One Two Three Five Four.

    Last Modified: 5/13/17 John Olson
*/

#include<stdio.h>

int main()
{
    int i, j = 0, k, n, exponent, num, dig;

    printf("This program prints the digits of a positive integer into English words\n\n");

    do{
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }while(num < 0);

    n = num;

    while(n > 0)
    {
        n /= 10;
        ++j;
    }


    for(i = j; i > 0; i--)
    {
        k = i;
        exponent = 1;

        while(k > 0)            //again I can't figure an easier way to raise to a variable exponent
        {
            exponent *= 10;
            --k;
        }
        dig = num % exponent /(exponent / 10);

        switch(dig)
        {
            case 0 :
                printf("Zero ");
                break;
            case 1 :
                printf("One ");
                break;
            case 2 :
                printf("Two ");
                break;
            case 3 :
                printf("Three ");
                break;
            case 4 :
                printf("Four ");
                break;
            case 5 :
                printf("Five ");
                break;
            case 6 :
                printf("Six ");
                break;
            case 7 :
                printf("Seven ");
                break;
            case 8 :
                printf("Eight ");
                break;
            case 9 :
                printf("Nine ");
                break;
        }
    }

    return 0;
}
