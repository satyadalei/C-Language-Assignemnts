/* This program takes value X and bassed on that it provides value of Y*/
#include<stdio.h>
#include<stdio.h>
void main()
{
  float x ;
  int y ;
  printf("\n This program takes value x and bassed on that it provides value of y \n");
  printf("\n Enter the value of x: ");
  scanf("%f", &x );

  if(x>0)
  {
    y = 1 ;
  }
  else if( x == 0)
  {
   y = 0 ;
  }
  else
  {
    y = -1 ;
  }


  printf("\n The value of y is %i ", y);
}
