#include<stdio.h>

int main()
{
    float basic, gross, net;
    const float conveyance = 0.25;
    const float medical = 0.27;
    const float tax = 0.17;

    printf("Please enter employee's basic salary: $");
    scanf("%f", &basic);

    gross = basic + (basic * conveyance) + (basic * medical);
    net = gross - gross * tax;

    printf("\nGross Salary: $%.2f\nNet Salary: $%.2f\n", gross, net);

    return 0;
}
