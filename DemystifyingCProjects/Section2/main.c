#include<stdio.h>

int main()
{
    char ch;

    do{
        printf("Do you want to reload? ");
        scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');

    return 0;
}
