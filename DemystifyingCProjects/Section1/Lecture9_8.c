#include<stdio.h>

int main()
{
    int fiveDigit, d1, d2, d3, d4, d5, sum;

    printf("Please enter a five digit number: ");
    scanf("%d", &fiveDigit);

    d1 = fiveDigit % 10;
    d2 = (fiveDigit % 100 - d1) / 10;
    d3 = (fiveDigit % 1000 - (d2 * 10) - d1) / 100;
    d4 = (fiveDigit % 10000 - (d3 * 100) - (d2 * 10) - d1) / 1000;
    d5 = (fiveDigit % 100000 - (d4 * 1000) - (d3 * 100) - (d2 * 10) - d1) / 10000;

    sum = d1 + d2 + d3 + d4 + d5;

    printf("Sum of all digits = %d\n", sum);

    return 0;
}

/*
    Logic is good however if possible make it simple if possible. Give it a try. Hint: Avoid too many tens, and hundreds etc.
*/
