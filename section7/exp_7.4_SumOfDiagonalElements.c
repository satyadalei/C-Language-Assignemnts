/*This program takes a nXn matrix and calculates sum of diagonal elements */
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,j,sum=0;
   printf("\n This program takes a nXn matrix and calculates sum of diagonal elements \n");
   printf("\n Enter n(number) to produce nXn square matrix: \n");
   scanf("%i",&n);
   int A[n][n];
   printf("\n Enter %i numbers  \n",n*n);
     for ( i = 0; i < n; i++)
     {
       for (j = 0; j < n; j++)
       {
         scanf("%i",&A[i][j]);
       }
    }
    /* Printing matrix and calculating diagonal elements */
    printf("\n Your matrix is : \n");
    for ( i = 0; i < n; i++)
     {
       for (j = 0; j < n; j++)
       {
         printf(" %i ",A[i][j]);
         if (i==j)
         {
           sum = sum + A[i][j];
         }
       }
       printf("\n");
    }
    
   printf("\n The sum of diagonal elements is %i \n",sum);
   printf("\n -------Program Ends --------- \n");
   getch();
}