#include <stdio.h>
void main()
{
  // Taking the radius of circle from user and declaring them as float
  float radius, perimeter, area ;
  printf("Enter the radius of the Circle: ");
  scanf("%f", &radius); // assigns the value of radius
  perimeter = 2*(3.14)*radius ; // area of the circle
  area = (3.14)*(radius)*(radius);  //area of the circle
  printf("The perimeter of the circle is %f \n", perimeter);
  printf("& the area is %f", area);
}
