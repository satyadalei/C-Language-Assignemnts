/* This program calculates Area of Triangle by taking 3 sides*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float side1, side2, side3, semiPeriMeter ,AreaOfTriangle;
   printf("\n This program calculates Area of Triangle by taking 3 sides \n");
   printf("\n ========================================= \n");
   printf("\n Enter the 3 sides of a triangle : \n");
   scanf("%f %f %f",&side1,&side2,&side3);
   semiPeriMeter = (side1 + side2 + side3)/2 ;
   AreaOfTriangle = sqrt( semiPeriMeter*(semiPeriMeter-side1)*(semiPeriMeter-side2)*(semiPeriMeter-side3) );
   printf("Area of the Triangle is %f ", AreaOfTriangle);
}
