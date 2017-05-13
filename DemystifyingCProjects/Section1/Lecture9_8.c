#include<stdio.h>

int main()
{
    int num, d1, d2, d3, d4, d5, sum;

    printf("Please enter a five digit number: ");
    scanf("%d", &num);

    d1 = num % 10;
    d2 = num % 100 / 10;
    d3 = num % 1000 / 100;
    d4 = num % 10000 / 1000;
    d5 = num % 100000 / 10000;

    sum = d1 + d2 + d3 + d4 + d5;

    printf("Sum of all digits = %d\n", sum);

    return 0;
}

