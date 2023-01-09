#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum,noOfIntigers;
    sum = 0;
    noOfIntigers = 0;
    for ( i = 101; i < 200; i++)
    {
      if (i%7 == 0)
      {
        noOfIntigers++;
        sum = sum + i ;
      }
      
    }
    printf("\n The no of digits between 100 and 200 that are divisible by 7 is %d and the sum of these numbers is %d \n", noOfIntigers, sum);
}