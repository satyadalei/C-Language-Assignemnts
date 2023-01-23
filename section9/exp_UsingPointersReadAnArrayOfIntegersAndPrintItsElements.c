/* This program reads an array of integers and prints it's elements using pointers */
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,*p;
  printf("\n This program reads an array of integers and prints it's elements using pointers \n");
  printf("\n Enter number of numbers you want to print \n");
  scanf("%i",&n);
  printf("\n Enter %i numbers \n",n);
  int numbers[n];
  /*p = &numbers[n]; */
  for(i=0;i<n;i++)
  {
      scanf("%i",(numbers+i));
  }
  printf("\n The numbers are \n");
  for(i=0;i<n;i++)
  {
      printf(" %i ",*(numbers+i));
  }
  printf("\n--------------Program ends--------------\n");
  getch();
}
