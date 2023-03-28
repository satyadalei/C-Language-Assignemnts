/*This program takes a 4X5 matrix using pointers */
#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 2
void main()
{
    int matrix[ROW][COL],i,j,*p;
    // p = &matrix[0][0];
    // p = matrix;
    printf("\n This program takes a 4X5 matrix using pointers \n");
    printf("\n Enter 20 numbers to form 4X5 matrix  \n");
    for ( i = 0; i < ROW; i++)
    {
       for (j = 0; j < COL; j++)
       {
         scanf("%u",*(matrix+i)+j);
       }
    }
    printf("\n Your 4X5 matrix is : \n");
     for ( i = 0; i < ROW; i++)
    {
       for (j = 0; j < COL; j++)
       {
         printf("     %i    ", *(*(matrix+i)+j));
       }
       printf("\n");
    }
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
