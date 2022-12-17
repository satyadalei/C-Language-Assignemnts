/*This program detects a number whether Odd or Even number */
#include<stdio.h>
void main()
{
    printf("\n This program takes a number and detects whether Odd or Even number \n");
    printf("==============================================================");
    int num;
    printf("\n Enter a integer :");
    scanf("%d", &num);

    /*Using conditional operator*/
    (num%2) ? printf("\n %i is a Odd Number ", num) : printf("\n %i is a Even Number ", num);
}
