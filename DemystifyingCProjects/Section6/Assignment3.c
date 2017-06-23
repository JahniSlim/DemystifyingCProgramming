/*  ..\Section6\Assignment3.c
    Radius of a circle is entered through the keyboard. Write a C program to print area of a circle
    and circumference of a circle using functions.

    Last Modified: 5/14/17 John Olson
*/

#include<stdio.h>
double FindCircum(double r);        //Is this naming convention correct for function names?
double FindArea(double r);          //Or is it findArea()?
const double pi = 3.1416;
int main()
{
    double radius, area, circum;

    printf("This program finds the area and circumference of a circle of a given radius\n\n");

    printf("Please enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = FindArea(radius);
    circum = FindCircum(radius);

    printf("The area is %.2lf\nThe circumference is %.2lf\n\n", area, circum);

    return 0;
}

double FindCircum(double r)
{
    double c;
    c = 2 * pi * r;
    return c;
}

double FindArea(double r)
{
    double a;
    a = pi * r * r;
    return a;
}
