/*This program takes a nXn matrix and prints only its upper triangular matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
  printf("\n This program takes a nXn matrix and prints only its upper triangular matrix \n");
  printf("\n Enter the n to form nXn matrix \n");
  scanf("%i",&n);
  printf("\n Enter %i numbers \n",n*n);
  int A[n][n];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
       scanf("%i",&A[i][j]);
    }
  }
  printf("\n The entered matrix is \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
       printf(" %i ",A[i][j]);
    }
    printf("\n");
  }
  printf("\n Printing only upper triangle matrix \n");
   for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if ( i > j)
      {
        printf("   ");
      }
      else{
        printf(" %i ",A[i][j]);
      }
    }
    printf("\n");
  }
  
  printf("\n Program Ends \n");
}