/*  ..\Section6\Assignment7.c
    Write a C program to find HCF and LCM of any two numbers entered through the keyboard.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>

int FindLCM(int a, int b);
int FindHCF(int a, int b);

int main()
{
    int n1, n2, lcm, hcf;

    printf("This program finds LCM and HCF of 2 user entered integers\n\n");

    while(1)
    {
        printf("Please enter the first number (0 to exit): ");
        scanf("%d", &n1);
        printf("Please enter the second number(0 to exit): ");
        scanf("%d", &n2);

        if (n1 == 0 || n2 == 0)
            return 0;

        lcm = FindLCM(n1, n2);
        hcf = FindHCF(n1, n2);

        printf("\nThe LCM is %d\n", lcm);
        printf("The HCF is %d\n\n", hcf);
    }
}

int FindLCM(int a, int b)
{
    int minMultiple;

    minMultiple = (a > b ? a : b);      //not gonna lie, i found this snippet.. very useful

    while(1)
    {
        if (minMultiple % a == 0 && minMultiple % b == 0)
            return minMultiple;

        ++minMultiple;
    }
}

int FindHCF(int a, int b)
{
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
