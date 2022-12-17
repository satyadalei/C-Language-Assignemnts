#include <stdio.h>
#include <conio.h>
void main()
{
  // 2nd attempt
  float cels, farhen;
  printf("Enter the celcius degree to be into Farhenhite :");
  scanf("%f", &cels);
  farhen = ( (float) ((cels*9)/5) ) + 32 ;
  printf("%f", farhen);

  printf("Enter the farhenhite to be into Celcius");
  scanf("%f", &farhen);
  cels = (farhen -32) *( (float) 5/9) ;
  printf("%f", cels);

  // 1st attempt
  //int cels ;
  //float fahren ; // There must be something
  //printf("Enter the Celcius number to be Fahrenhite \n :");
  //scanf("%i", &cels);
  //printf("Ok you have entered %i degree celcius \n", cels);
  //fahren = (float) (((float)(cels*9)/5)+32) ; // there must be something
  //fahren = (float)  ((cels*((float)9/5))+32) ;
  //printf("The %i is %f Fahrenhite ", cels, fahren);
  //getch();
}
