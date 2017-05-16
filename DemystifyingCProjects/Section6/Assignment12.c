/*  ..\Section6\Assignment12.c
    Write a general purpose function to convert any given year into its roman equivalent.

    Last Modified: 5/15/17 John Olson
*/

#include<stdio.h>
int FindReverse(int);
int Power(int exponent);
void RomanNumeral(int, int);

int main()
{
    int year, roman, n, i = 0;

    printf("This program converts a year into its Roman Numerals\n\n");

    while(1)
    {

        printf("Please enter a year below 4000(or 0 to exit): ");
        scanf("%d", &year);

        if (year == 0)
            return 0;

        roman = FindReverse(year);

        n = year;
        i = 0;

        while(n > 0)
        {
            n /= 10;
            ++i;
        }

        RomanNumeral(roman, i);
    }
}


    /*Reverses the order of an integer*/
int FindReverse(int n)
{
    int result = 0;

    while(n != 0)
    {
        result = result * 10;
        result = result + n % 10;
        n /= 10;
    }

    return result;
}



    /*Raises n * 10^exponent
    I need this for multiples of 10, 100, 1000*/
int Power(int exponent)
{
    if (exponent != 0)
        return (10 * Power(exponent - 1));
    else
        return 1;
}



    /*If the year is divisible by 10^n it catches its reverse single digit and returns it to its original state.
    It then forces the number of times to run the switch to decrement, while holding the correct switch/case
    flag. It's sort of hackish, I'm sure, but it works!*/
void RomanNumeral(int n, int flag)
{
    int digit, counter = flag;
    int powTen = 0;     //a 1 or zero flag to skip years that are divisible by 10, 100, 1000

    if(n < 10)
    {
        n *= Power(flag - 1);
        powTen = 1;
    }

    while (counter > 0)
    {

        digit = n % 10;

        if (n % 10 == 0 && powTen == 1)
            --counter;
        else
        {
            switch(flag)
            {
                case 1 :
                {
                    if (digit == 1)
                        printf("i");
                    else if(digit == 2)
                        printf("ii");
                    else if(digit == 3)
                        printf("iii");
                    else if(digit == 4)
                        printf("iv");
                    else if(digit == 5)
                        printf("v");
                    else if(digit == 6)
                        printf("vi");
                    else if(digit == 7)
                        printf("vii");
                    else if(digit == 8)
                        printf("viii");
                    else if(digit == 9)
                        printf("ix");
                    break;
                }

                case 2 :
                {
                    if (digit == 1)
                        printf("x");
                    else if(digit == 2)
                        printf("xx");
                    else if(digit == 3)
                        printf("xxx");
                    else if(digit == 4)
                        printf("xl");
                    else if(digit == 5)
                        printf("l");
                    else if(digit == 6)
                        printf("lx");
                    else if(digit == 7)
                        printf("lxx");
                    else if(digit == 8)
                        printf("lxxx");
                    else if(digit == 9)
                        printf("xc");
                    break;
                }

                case 3 :
                {
                    if (digit == 1)
                        printf("c");
                    else if(digit == 2)
                        printf("cc");
                    else if(digit == 3)
                        printf("ccc");
                    else if(digit == 4)
                        printf("cd");
                    else if(digit == 5)
                        printf("d");
                    else if(digit == 6)
                        printf("dc");
                    else if(digit == 7)
                        printf("dcc");
                    else if(digit == 8)
                        printf("dccc");
                    else if(digit == 9)
                        printf("cm");
                    break;
                }

                case 4 :
                {

                    if (digit == 1)
                        printf("m");
                    else if(digit == 2)
                        printf("mm");
                    else if(digit == 3)
                        printf("mmm");
                    break;
                }
            }

            --counter;
            --flag;
        }

        n /= 10;
    }

    printf("\n\n");

    return;

}

