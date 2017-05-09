#include<stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5, gpa;

    printf("Enter first grade (0-100): ");
    scanf("%d", &mark1);

    printf("Enter second grade (0-100): ");
    scanf("%d", &mark2);

    printf("Enter third grade (0-100): ");
    scanf("%d", &mark3);

    printf("Enter fourth grade (0-100): ");
    scanf("%d", &mark4);

    printf("Enter fifth grade (0-100): ");
    scanf("%d", &mark5);

    gpa = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;      

    printf("Student's GPA: %d\n", gpa);

    return 0;
}

/*
    Please check this program for variety kind of input. A few times you may get wrong output. Find the reason and correct it
*/
