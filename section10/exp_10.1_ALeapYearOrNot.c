/* This program takes a year and tells whether it is a leap year or not */
#include<stdio.h>
#include<conio.h>
/* keep the function name capitalized */
int LeapYear(int x)
{
    /*first check whether divisible by 4*/
    if (x%4 == 0)
    {
      /*check if divisible by 100*/
      if (x%100 == 0)
      {  
        /*check if divisible by 400*/
        if (x%400 == 0)
        {
            return 1; /*1 means leap year*/
        }
        else
        {
            return 0; /*0 means not a leap year*/
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
       return 0;
    }
}
int LeapYear(int x);
void main()
{
    int year,leapYear;
    printf("\n This program takes a year and tells whether it is a leap year or not \n");
    printf("\n Enter the year \n");
    scanf("%i",&year);
    leapYear = LeapYear(year);
    if (leapYear == 1)
    {
        printf("\n The year %i is a leap year \n",year);
    }
    else if (leapYear == 0)
    {
        printf("\n The year %i is not a leap year \n",year);
    }
    printf("\n---------------Program Ends------------------\n");
    getch();
}