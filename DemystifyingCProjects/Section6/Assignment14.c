
/*  ..\Section6\Assignment14.c
    A positive integer is input through the keyboard. Write a function to obtain the prime
    factors of this number. For example prime factors of 56 are 7, 2, 2 and 2 where as prime
    factors of 26 are 13 and 2.

    Last Modified: 5/15/17 John Olson
*/

#include<stdio.h>
void FindFactors(int);
int IsPrime(int);

int main()
{
    int n;

    printf("This program prints the prime factors of a number\n\n");

    while(1)
    {
        printf("Enter an integer (or 0 to exit): ");
        scanf("%d", &n);

        if(n == 0)
            return 0;

        FindFactors(n);
    }
}




    /* Loop function to find factors of a number, excluding 1*/
void FindFactors(int num)
{
    int i = 2, total_pf = 0;

    while(i <= num / 2)
    {
        if(num % i == 0)
            total_pf += IsPrime(i);

        ++i;
    }

    if(total_pf == 0)
        printf("There are no prime factors of %d\n\n", num);

    return;
}



    /*Function to test whether the current factor in FindFactors() is prime*/
int IsPrime(int num_check)
{
    int i = 2;

    while(i < num_check)
    {
        if(num_check % i == 0)
            return 0;

        ++i;
    }

    printf("%d\n", num_check);
    return 1;
}
