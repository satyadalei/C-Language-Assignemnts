#include<stdio.h>
#include<conio.h>
void main()
{
    int num,count ;
    count = 0 ;
    printf("\n This program takes a integer and calculates no of digits in it. \n");
    printf("\n Enter the number \n");
    scanf("%d", &num);
    while (num != 0)
    {
      num = num /10 ; 
      count = count +1 ;
    }
    printf("The number of digits is  %i ", count);
}