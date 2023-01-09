#include<stdio.h>
#include<conio.h>
void main()
{
    int initialNumber ,number,remainder,sum,i;
    printf("\n This program takes a number and checks whether a Armstrong number or not \n");
    printf("\n Enter the number \n");
    scanf("%i",&initialNumber);
    sum = 0;
    number = initialNumber;
    for ( i = number; i != 0; i=i/10)
    {
        remainder = i%10;
        sum = sum + (remainder)*(remainder)*(remainder) ;
    }
    printf("\n The sum of cube of digits in number %i is %i \n", initialNumber ,sum);
    if (sum == initialNumber)
    {
       printf("\n The entered number is a Armstrong number \n");
    }
    else
    {
        printf("\n The entered number is NOT a Armstrong number \n");
    }
    
    
}