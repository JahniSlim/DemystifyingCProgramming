/*  Section3_1
    If cost and selling price of a particular item is input through the keyboard,
    write a C program to determine whether a trader has made a profit or loss.
    Also print how much loss he has incurred or profit he has earned.              */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cost, price, difference;

    printf("Enter cost of item: $");
    scanf("%d", &cost);
    printf("\nEnter price of item: $");
    scanf("%d", &price);

    difference = abs(price - cost);                 // proper way to find the absolute difference

    if (price > cost)
        printf("The trader made a profit of $%d\n", difference);
    else
        printf("The trader lost $%d\n", difference);


    return 0;
}
