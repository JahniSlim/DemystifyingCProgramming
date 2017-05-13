
/*  ..\Section1\Lecture9_4.c
    Marks obtained by student in 5 different subjects are input through the keyboard. Write a C program
    to print total marks and percentile marks obtained by student. (Note: Assume that maximum marks obtained
    by student in any subject are 100)

    Last Modified: 5/12/17 John Olson
*/

#include<stdio.h>

int main()
{
    float mark1, mark2, mark3, mark4, mark5;
    float gpa;

    printf("Enter first grade (0-100): ");
    scanf("%f", &mark1);

    printf("Enter second grade (0-100): ");
    scanf("%f", &mark2);

    printf("Enter third grade (0-100): ");
    scanf("%f", &mark3);

    printf("Enter fourth grade (0-100): ");
    scanf("%f", &mark4);

    printf("Enter fifth grade (0-100): ");
    scanf("%f", &mark5);

    gpa = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;

    printf("Student's GPA: %.2f\n", gpa);

    return 0;
}
