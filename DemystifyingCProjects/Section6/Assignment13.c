/*  ..\Section6/Assignment13.c
    Write a function pow(x,y) to calculate the value of x raised to y

    Last Modified: 5/15/17 John Olson
*/

int Power(int base, int exponent)
{
    if (exponent != 0)
        return (base * Power(base, exponent - 1));
    else
        return 1;
}
