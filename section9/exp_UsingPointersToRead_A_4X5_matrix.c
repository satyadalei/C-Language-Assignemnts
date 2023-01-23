/*This program takes a 4X5 matrix using pointers */
#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix[4][5],i,j,*p;
   // p = &matrix[4][5];
    printf("\n This program takes a 4X5 matrix using pointers \n");
    printf("\n Enter 20 numbers to form 4X5 matrix  \n");
    for ( i = 0; i < 4; i++)
    {
       for (j = 0; j < 5; j++)
       {
         scanf("%u",*(matrix+i)+j);
       }
    }
    printf("\n Your 4X5 matrix is : \n");
     for ( i = 0; i < 4; i++)
    {
       for (j = 0; j < 5; j++)
       {
         printf("     %i    ",*(*(matrix+i)+j));
       }
       printf("\n");
    }
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
