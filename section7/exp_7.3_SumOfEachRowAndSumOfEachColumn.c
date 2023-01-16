/*This program takes a nXn matrix and calculates sum of each column and each row */
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,sum;
  printf("\n This program takes a nXn matrix and calculates sum of each column and each row \n");
  printf("\n Enter n to produce nXn marix \n");
  scanf("%i",&n);
  int A[n][n];
  printf("\n Enter %i numbers \n",n*n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
       scanf("%i",&A[i][j]);
    }
  }
  /*Sum of rows and sum of columns */
  for ( i = 0; i < n; i++)
  {
    sum = 0 ;
    for (j = 0; j < n; j++)
    {
        sum = sum + A[i][j];
    }
    printf("\n The Sum of elements of Row %i is %i \n",i+1,sum);
  }
  /*Sum of columns */
  for ( i = 0; i < n; i++)
  {
    sum = 0;
    for (j = 0; j < n; j++)
    {
      sum = sum + A[j][i];
    }
    printf("\n The sum of elements of column %i is %i \n",i+1,sum);
  }
  
  
  printf("\n ----- Program Ends -------\n");
}