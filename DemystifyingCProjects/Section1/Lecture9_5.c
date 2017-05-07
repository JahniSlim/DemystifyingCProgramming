#include<stdio.h>

int main()
{
    float length, width, area, perimeter;

    printf("Enter the length of a rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of a rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = (length * 2) + (width * 2);

    printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);

    return 0;
}
