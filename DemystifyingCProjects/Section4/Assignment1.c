/*  ..\Section4\Assignment1.c
    Marks of 3 subjects are input through the keyboard. Write a program to print total
    and percentile marks for 3 students using any appropriate loop control structure.

    Last Modified: John Olson 5/3/17
*/

#include<stdio.h>

int main()
{
    int i, j;                 // increment for both student[i] and mark total
    int mark = 0;
    int num_stud, num_subj;
    int student[3];
    char reload;

    printf("This program prints the total points and average of up to 3 students and 3 subjects\n");

    do{
       do{
            printf("\nSelect number of students (1-3): ");
            scanf(" %d", &num_stud);
        }while(num_stud > 3 || num_stud <=0);

        do{
            printf("\nSelect number of subjects (1-3): ");
            scanf("%d", &num_subj);
        }while (num_subj > 3 || num_subj <=0);

        printf("\n");

        for(i = 1; i <= num_stud; i++)
        {
            student[i-1] = 0;
            for(j = 1; j <= num_subj; j++)
            {
                printf("Enter student number %d mark %d: ", i, j);
                scanf("%d", &mark);

                student[i-1] += mark;
            }
            printf("\n");
        }

        for(i = 1; i <= num_stud; i++)
        {
            printf("\nStudent %d total points: %d/%d00\t\tAverage: %d\n", i, student[i-1], num_subj, student[i-1] / num_subj);
        }

        printf("\nWould you like to try again y/n? ");
        scanf(" %c", &reload);
    }while(reload == 'y' || reload == 'Y');

    printf("\n\nThank you for testing this software!\nJohn Olson 2017\n\n");

    return 0;
}


