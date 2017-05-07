#include<stdio.h>

int main()
{
    float radius, area, circumference;
    const float pi = 3.141593;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    area = pi * (radius * radius);
    circumference = 2 * pi * radius;

    printf("\nArea = %.2f\nCircumference = %.2f\n", area, circumference);

    return 0;
}
