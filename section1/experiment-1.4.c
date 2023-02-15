/*This program takes temperature in degree celcius and converts in fahrenheit*/
#include <stdio.h>
#include <conio.h>
void main()
{
  // 2nd attempt
  float cels, farhen;
  printf("\n This program takes temperature in degree celcius and converts in fahrenheit \n");
  printf("Enter the celcius degree to be converted into Farhenhite :");
  scanf("%f", &cels);
  farhen = ( (float) ((cels*9)/5) ) + 32 ;
  printf("%f", farhen);

   printf("\n ----------Program Ends--------------\n");
}
