/*This program takes a mXn matrix  using function and then makes it's transpose */
#include <stdio.h>
#include <conio.h>
int ColSize;
void CreatMatrix(int numbers[][ColSize], int m, int n);
void main()
{
   int m, n;
   printf("\n This program takes a mXn matrix  using function and then makes it's transpose \n");
   printf("\n Enter value of m and n to creat mXn matrix :\n");
   scanf("%i%i", &m, &n);
   int numbers[m][n];
   ColSize = n;
   printf("\n Enter %i numbers \n", m * n);
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%i", &numbers[i][j]);
      }
   }
   CreatMatrix(numbers, m, n);
   printf("\n -----------Program Ends-------------- \n");
   getch();
}
void CreatMatrix(int numbers[][ColSize], int m, int n)
{
   int i, j, num;
   //  int transposeMatrix[n][m];
   // printf("\n Enter %i numbers \n",m*n);
   // for ( i = 0; i < m; i++)
   // {
   //   for (j = 0; j < n; j++)
   //   {
   //      scanf("%i",&numbers[i][j]);
   //   }
   // }
   /*--------------Your matrix is --------*/
   printf("\n Your entered matrix is \n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("   %i   ", numbers[i][j]);
      }
      printf("\n");
   }
   printf("\n The transpose of your entered matrix is \n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < m; j++)
      {
         transposeMatrix[i][j] = numbers[j][i];
         printf("   %i   ", transposeMatrix[i][j]);
      }
      printf("\n");
   }
}