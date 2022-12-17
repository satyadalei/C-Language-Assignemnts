/* This program calculates area of the triangle using base and heights */
#include <stdio.h>
void main()
{
  int base, height, area;

  printf(" \n Enter the Base of Triangle in cm : \n");
   scanf("%i", &base) ;
  printf("\n Enter the height of Triangle in cm : \n");
   scanf("%i", &height);
   area = (base*height) /2 ;
  printf("\n Area of the triagnle is %i sq cm. ", area) ;
}
