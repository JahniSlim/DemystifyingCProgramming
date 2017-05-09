#include<stdio.h>

int main()
{
    int fiveDigit, d1, d2, d3, d4, d5;

    printf("Please enter a five digit number: ");
    scanf("%d", &fiveDigit);

    d1 = fiveDigit % 10;
    d2 = (fiveDigit % 100 - d1) / 10;
    d3 = (fiveDigit % 1000 - (d2 * 10) - d1) / 100;
    d4 = (fiveDigit % 10000 - (d3 * 100) - (d2 * 10) - d1) / 1000;
    d5 = (fiveDigit % 100000 - (d4 * 1000) - (d3 * 100) - (d2 * 10) - d1) / 10000;

    printf("Reverse order = %d%d%d%d%d\n", d1, d2, d3, d4, d5);

    return 0;
}

/*
    Attempt is good but you haven't reached the true objective. You are supposed to reverse the original number and not merely 
    print the number in the reverse order. 
    So if a particular varibale say x contains 653 and I print it, it would print 653. After you process it for reversing it, 
    if I try to access the same variable x it should print 356. 
    I hope you got it, what I mean.
    */
