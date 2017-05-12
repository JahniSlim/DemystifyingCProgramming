/*  ..\Section4\GameChallenge.c
    Write a C program for a match-stick game between the computer and a user. Being a programmer
    you should ensure and write a code in such a way that computer always wins. Rules for the game
    are as follows:

    There are 21 match sticks.
    The computer asks the player to pick 1, 2, 3 or 4 match-sticks
    After the player picks, the computer does it picking
    Whoever is forced to pick up the last match-stick loses the game

    Last Modified: 5/8/17 John Olson
*/

#include<stdio.h>

int main()
{
    int matchsticks = 21, pickup;
    int i;
    char reload;

    printf("Welcome to The Matchstick Game!!\n\n");
    printf("Rules of the game:\n\n");
    printf("There are 21 matchsticks\n");
    printf("You may pick up 1, 2, 3 or 4 matchsticks\n");
    printf("The computer chooses the amount to pick up next\n");
    printf("Whoever picks up the last matchstick loses the game!\n\n");

    do{
        while(matchsticks > 0)
        {
            if(matchsticks > 1)
                printf("There are %d matchsticks left\n", matchsticks);
            else
                printf("There is only 1 matchstick left!\n");

            for(i = matchsticks; i > 0; i--)
                printf("| ");

            printf("\n");
            printf("How many matchsticks would you like to pick up(1-4)? ");
            scanf("%d", &pickup);

            if(pickup < 1 || pickup > 4)
            {
                do{
                    printf("Please choose a number between 1 - 4: ");
                    scanf("%d", &pickup);
                }while(pickup < 1 || pickup > 4);
            }

            if(pickup > matchsticks)
            {
                do{
                    printf("There are only %d left!\n", matchsticks);
                    printf("How many matchsticks would you like to pick up? ");
                    scanf("%d", &pickup);
                }while(pickup > matchsticks);
            }

            matchsticks -= pickup;

            if(matchsticks > 0)
            {
                printf("\n");
                pickup = 5 - pickup;
                printf("Computer picks up %d\n\n", pickup);
                matchsticks -= pickup;
            }
        }

        printf("\nNice try, but you lost!!\n\n");     //hardcoded loss since there is no way to win

        printf("Would you like to play again? (y/n) ");
        scanf(" %c,", &reload);

    }while(reload == 'y' || reload == 'Y');

    return 0;
}

