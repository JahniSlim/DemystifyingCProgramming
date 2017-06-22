#include<stdio.h>

int main()
{
    int num, d1, d2, d3, d4, d5, sum;

    printf("Please enter a five digit number: ");
    scanf("%d", &num);

    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;
    num = num / 10;
    d5 = num % 10;

    sum = d1 + d2 + d3 + d4 + d5;

    printf("Sum of all digits = %d\n", sum);

    return 0;
}

