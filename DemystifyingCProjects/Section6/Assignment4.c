/*  ..\Section6\Assignment4.c
    Marks of five subjects are entered through the keyboard. Write a C program using function to
    print total marks and percentile marks.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
double CollectMark(int n);

int main()
{
    double totalMarks, percentage;
    int i;

    printf("This program prints the total marks and percentage of 5 subjects\n\n");

    for(i = 1; i <= 5; i++)
        totalMarks += CollectMark(i);

    percentage = totalMarks / 5;

    printf("\nTotal Marks: %.2lf/500\n", totalMarks);
    printf("Percentage: %.2lf\n\n", percentage);

    return 0;
}

double CollectMark(int n)
{
    double mark;

    printf("Please enter mark %d: ", n);
    scanf("%lf", &mark);

    return mark;
}
