/*  ..\Section4\Assignment11.c
    Write a C program find and print highest marks in the class for particular subject using
    loop. Make arrangement to accept marks of as many students as user wishes.

    Last Modified: 5/8/17 John Olson
*/

#include<stdio.h>

int main()
{
    int num, i;
    int grade, top1 = 0, top2 = 0, top3 = 0;

    printf("This program lists the top 3 grades from a user entered set of grades.\n\n");

    printf("How many students are in the class? ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        printf("Enter student number %d's grade: ", i);
        scanf("%d", &grade);

        if(grade > top1)
        {
            top3 = top2;
            top2 = top1;
            top1 = grade;
        }
        else if (grade <= top1 && grade > top2)
        {
            top3 = top2;
            top2 = grade;
        }
        else if(grade <= top2 && grade > top3)
        {
            top3 = grade;
        }
    }

    printf("\nTop grade: %d\n", top1);
    printf("Second best grade: %d\n", top2);
    printf("Third best grade: %d\n", top3);

    return 0;
}

/*

    I am providing a source code here, the way proram is expected to run 
    
    #include<stdio.h>
int main()
{
	int marks;
	int max;
	char ch = 'y';
	marks = max = 0;
	
	while(ch == 'y')
	{
		printf("Enter marks:\t");
		scanf("%d",&marks);
		
		if((marks <= 0 || marks > 100))
		{
			printf("Invalid input\n");
			continue;
		}
		else
			if(marks>=max)
				max = marks;		
		printf("Do you wish to continue (y/n)\t");
		scanf(" %c",&ch);		
	}
	
	printf("Highest marks in the class %d\n",max);
	
	return 0;
}
*/
