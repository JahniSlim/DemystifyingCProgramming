/*  ..\Section4\Assignment10.c
    Write a program to print all prime numbers between 0 and 500.
    Last Modified: 5/8/17 John Olson
*/

#include<stdio.h>

int main()
{
    int i = 2, j, prime = 0, layout = 0;

    printf("This program prints all prime numbers between 0 and 500.\n\n");

    while (i <= 500)
    {
        for(j = 2; j <= i / 2; j++)         //Unable to get 2 or 3 to print so far..
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            else
                prime = 1;
        }

        if(prime == 1)
        {
            printf("%d\t", i);
            ++layout;
        }

        if(layout == 10)
        {
            printf("\n");
            layout = 0;
        }

        i++;
        prime = 0;
    }

    printf("\n");\


    return 0;
}

/*
    Here is a compact code which I just wrote for you. 
    
    #include<stdio.h>
    int main()
    {
	    int i, j;
	
	    for(i = 1; i<=500; i++)
	    {
		    j = 2;
		    while(j <= i - 1)
		    {
			    if( i%j == 0)
				    break;
			    j++;
		    }
		    if(i==j)
			    printf("%8d",j);
	    }
 	    printf("\n");   
        return 0;
}
*/
