#include<stdio.h>

int main()
{
    float cel, far;

    printf("Enter a temperature in celcius: ");
    scanf("%f", &cel);

    far = cel * 1.8 + 32;

    printf("Fahrenheit = %.1f\n", far);             // %f is format specifier for float

    return 0;
}
