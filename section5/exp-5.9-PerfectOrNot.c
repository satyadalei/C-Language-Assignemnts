#include<stdio.h>
#include<conio.h>
void main()
{
    int number,sum,i;
    printf("\n This program takes a number and checks whether it is perfect or not \n");
    printf("\n Enter the number \n");
    scanf("%i",&number);
    sum = 1;
    for(i=2 ; i<=(number/2)+1 ;i++)
    {
        if(number%i == 0)
        {
            sum = sum+i ;
        }
    }
    if(number == sum )
    {
       printf("\n The entered number is a perfect number. \n");
    }
    else
    {
        printf("\n The entered number is NOT a perfect number \n");
    }
    printf("\n Program ends");
    getch();
}
