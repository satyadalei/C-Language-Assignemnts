/*This program takes two matrix and adds them using pointer*/
#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2
void InputMatrix(int mat[][COL]);
void PrintMatrix(int mat[][COL]);
void AddTwoMatrix(int mat1[][COL],int mat2[][COL],int res[][COL]);
void main()
{
    int matrix1[ROW][COL];
    int matrix2[ROW][COL];
    int result[ROW][COL];
    printf("\n This program takes two matrix and adds them using pointer \n");

    printf("\n Enter first matrix[%iX%i] elements\n",ROW,COL);
    InputMatrix(matrix1); /*Givving array name means - Passing base address of 2D Array*/
    //PrintMatrix(matrix1);

    printf("\n Enter second matrix[%iX%i] elements\n",ROW,COL);
    InputMatrix(matrix2);
    //PrintMatrix(matrix2);

    AddTwoMatrix(matrix1,matrix2,result);
    printf("\n The result of addition of two matrix is :\n");
    PrintMatrix(result);
    
    // InputMatrix2(matrix2,ROW,COL);
    // AddTwoMatrix(matrix1,matrix2,result);
    // PrintMatrix(result, ROW, COL);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void InputMatrix(int mat[][COL]) /*A matrix will be passed into means base address as arguement*/
{
    int i,j;
    for (i = 0; i < ROW; i++)
    {
       for (j = 0; j < COL; j++)
       {
         printf("Enter the matrix[%i][%i] elements :",i,j);
         scanf("%i",*(mat+i)+j );
       }
    }
    
}
void AddTwoMatrix(int mat1[][COL],int mat2[][COL],int res[][COL])
{
  int i,j;
  for (i = 0; i < ROW; i++)
  {
     for (j = 0; j < COL; j++)
     {
        *(*(res+i) + j) = *(*(mat1+i)+j) + *(*(mat2+i)+j);
     }
  }
  
}
void PrintMatrix(int mat[][COL])
{
  int i,j;
  for ( i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
       printf("%i\t",*(*(mat+i)+j)) ;
    }
    printf("\n");
  }
  
}

