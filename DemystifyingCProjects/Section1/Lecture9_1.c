#include<stdio.h>

int main()
{
    int x, y, z, sum;

    printf("Please enter a number:");
    scanf("%d, &x");

    printf("\nPlease enter another number:");
    scanf("%d, &y");

    printf("\nPlease enter another number:");
    scanf("%d, &z");

    sum = x + y + z;

    printf("The sum of %d + %d + %d = %d", x, y, z, sum);

    return 0;
}
