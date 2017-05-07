#include<stdio.h>

int main()
{
    float kilometers, meters, feet, inches, centimeters;

    printf("Please enter a distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;
    feet = kilometers * 3280.839895;
    inches = feet * 12;
    centimeters = meters * 100;

    printf("\nMeters: %.2f\nFeet: %.2f\nInches: %.2f\nCentimeters: %.2f\n",
           meters, feet, inches, centimeters);


    return 0;
}
