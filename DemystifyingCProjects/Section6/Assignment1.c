
/*  ..\Section6\Assignment1.c
    Write a C program to find sum of two integers using function sum( ), and product of same integers
    using function product( ).

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
int add(int a, int b);
int multiply(int a, int b);

int main()
{
    int n1, n2;
    int sum, product;

    printf("This program finds the sum and product of two integers.\n\n");

    printf("Please enter the first integer: ");
    scanf("%d", &n1);

    printf("Please enter the second integer: ");
    scanf("%d", &n2);

    printf("\n");

    sum = add(n1, n2);
    product = multiply(n1, n2);

    printf("The sum of %d and %d is %d\n", n1, n2, sum);
    printf("The product of %d and %d is %d\n", n1, n2, product);

    return 0;
}

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int multiply(int a, int b)
{
    int result;
    result = a * b;
    return result;
}
