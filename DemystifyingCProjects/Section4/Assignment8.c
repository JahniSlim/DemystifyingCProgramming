/*  ..\Section4\Assignment8.c
    Write a C program to print all Armstrong numbers between 0 and number entered by the user. For
    example if user enters 500 then output would be all Armstrong numbers between 0 and 500. (If sum
    of cubes of each digit of the number is equal to the number itself, then the number is an
    Armstrong number) For example 153 = (1* 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)

    Last Modified: 5/7/17 John Olson
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, j, k, n, range, exponent, t = 0, digit = 0, layout = 0;
    int armstrong[20];      //array holds seperate digits, allows user to enter up to a 21 digit number

    printf("This program prints a user defined range of Armstrong numbers in sequence.\n\n");

    printf("Please enter a value for Armstrong number range 0 - ");
    scanf("%d", &range);

    for(i = 1; i <= range; i++)
    {
        n = i;

        while(n != 0)
        {
            n /= 10;
            ++digit;
        }

        for(j = digit; j > 0; j--)
        {
            exponent = 1;
            for(k = 1; k <= digit; k++)
                exponent *= 10;

            armstrong[j] = (i % exponent);

            for(k = 1; k <= digit; k++)
                armstrong[j] *= armstrong[j];

            t += armstrong[j];
        }

        if(t == i)
        {
            printf("%d\t", i);
            ++layout;
        }

        if(layout == 10)
        {
            printf("\n");
            layout = 0;
        }
    }

    printf("%d", (int) t);

    return 0;
}

/*

#include<stdio.h>
int main()
{
	int armnum, temp;
	int x, y, z;
	
	printf("Armstrong numbers between 1 and 500 are");
	for(armnum = 1; armnum<=500; armnum++)
	{
		temp = armnum;
		
		x = armnum%10;
		armnum = armnum / 10;
		y = armnum % 10;
		armnum = armnum / 10;
		z = armnum % 10;
		
		armnum = temp;
		
		if(armnum == (x*x*x + y*y*y + z*z*z))
			printf("%4d",armnum);
	}
	printf("\n\n");
	return 0;	
}
*/
