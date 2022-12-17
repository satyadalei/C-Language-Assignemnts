/*This program calculates the simple interest and  compound interest  */
#include <stdio.h>
#include<math.h> 
void main()
{
   float simpleInterest,rate, compoundInterest,principal, time;

   printf("\n Enter the principal amount :");
   scanf("%f", &principal);

   printf("\n Enter the rate percentage :");
   scanf("%f", &rate);
   
   printf("\n Enter the time :")   ;
   scanf("%f", &time);

   
   
   simpleInterest = principal*rate*time/100;
   compoundInterest = principal*( pow(( 1+ (rate/100)) ,time)) - principal ;

   printf("\n The simple interest is %f ", simpleInterest);
   printf("\n The compound interest is %f", compoundInterest);
}