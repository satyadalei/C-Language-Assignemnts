/*This program takes radius of the circle and displays it's area and perimeter*/
#include <stdio.h>
#include<conio.h>
void main()
{
  // Taking the radius of circle from user and declaring them as float
  float radius, perimeter, area ;
  printf("Enter the radius of the Circle: ");
  scanf("%f", &radius); // assigns the value of radius
  perimeter = 2*(3.14)*radius ; // perimeter of the circle
  area = (3.14)*(radius)*(radius);  //area of the circle
  printf("\nThe perimeter of the circle is %f & the area is %f \n", perimeter, area);
  printf("\n----------Program ends-------------\n");
  getch();

}
