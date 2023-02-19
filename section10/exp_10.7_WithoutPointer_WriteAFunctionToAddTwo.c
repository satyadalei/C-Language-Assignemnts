/*This program takes two matrix and adds them using pointer*/
#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2
void InputMatrix1(int matrix1[][COL],int m, int n);
void InputMatrix2(int matrix2[][COL],int m, int n);
void AddTwoMatrix(int matrix1[][COL], int matrix2[][COL], int result[][COL]);
void PrintMatrix(int result[][COL],int m, int n);
void main()
{
    int matrix1[ROW][COL];
    int matrix2[ROW][COL];
    int result[ROW][COL];
    printf("\n This program takes two matrix and adds them using pointer \n");
    printf("\n Enter the  matrix1[3X3] elements\n");
    InputMatrix1(matrix1,ROW,COL);
    InputMatrix2(matrix2,ROW,COL);
    AddTwoMatrix(matrix1,matrix2,result);
    PrintMatrix(result, ROW, COL);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void PrintMatrix(int result[][COL],int m, int n)
{
  int i,j;
  printf("\n The matrix is :\n");
  for (i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
      // printf("%i\t",result[i][j]);
      printf("%i\t",result[i][j]);
    }
    printf("\n");
  }
  
}
void AddTwoMatrix(int matrix1[][COL], int matrix2[][COL], int result[][COL])
{
  int i,j;
  for (i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
       result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  
}
void InputMatrix1(int matrix1[][COL],int m, int n)
{
  int i,j;
  printf("\n Enter %i elements  \n",ROW*COL);
  for ( i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
      //  scanf("%i",&matrix1[i][j]) ;
       scanf("%i",&matrix1[i][j]) ;
    }
  }
  
}
void InputMatrix2(int matrix2[][COL],int m, int n)
{
  int i,j;
  printf("\n Enter %i elements  \n",ROW*COL);
  for ( i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
       scanf("%i",&matrix2[i][j]) ;
    }
  }
}
