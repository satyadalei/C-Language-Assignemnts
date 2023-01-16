/*This program takes nXn matrix and checks whether a symmetric matrix or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,j,symmetricStatus = 1;
   printf("\n This program takes nXn matrix and checks whether a symmetric matrix or not \n");
   printf("\n Enter the n to form nXn square matrix \n");
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
   /*Printing of matrix*/
   printf("\n Your entered matrix is :\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf(" %i ",A[i][j]);
      }
      printf("\n");
   }
   /* Checking the symmetric or not */
   for (i = 0; i < n; i++)
   {
     for (j = 0; j < n; j++)
     {
         if (i < j) /*Checks only upper triangular elements with corresponding elements like A21 to corresponding A12*/
         {
            if (A[i][j] != A[j][i])
            {
              symmetricStatus = 0 ; /* 0 means not symmetric */
              break;
            }
         }
     }
   }
   if (symmetricStatus == 0)
   {
      printf("\n The matrix is Not a symmetric matrix \n");
   }
   else
   {
      printf("\n The matrix is a symmetric matrix \n");
   }

   
   printf("\n Program Ends \n");
}