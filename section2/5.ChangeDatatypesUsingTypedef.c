/*This program calculates the simple interest and  compound interest  
 and data types are renamed here using typedef
*/
#include <stdio.h>
#include<math.h> 
void main()
{
   typedef float Decimal ;
   Decimal simpleInterest, compoundInterest, principal;
   typedef int integer;
   integer rate, time;

   printf("\n This program takes principal value, rate, time and calculates the simple interest and  compound interest \n");
   printf("\n ================================== \n");
   printf("\n Enter the principal amount :");
   scanf("%f", &principal);

   printf("\n Enter the rate percentage :");
   scanf("%i", &rate);
   
   printf("\n Enter the time :")   ;
   scanf("%i", &time);

   
   
   simpleInterest = principal*rate*time/100;
   compoundInterest = principal*( pow((1+ ((float) rate/100)) ,time)) - principal ;

   printf("\n The simple interest is %f ", simpleInterest);
   printf("\n The compound interest is %f", compoundInterest);
}