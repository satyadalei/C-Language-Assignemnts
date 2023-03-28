/* This program prints a triangular shaped collection of stars */
#include<stdio.h>
void main()
{
    int i,j,k,noOfRows;
    noOfRows = 7 ; /*This number has to be odd*/
    printf("\n This program prints a triangular shaped collection of stars \n");
    for(i=noOfRows; i<= (noOfRows+1)/2 ;i-- )
    {
     if( i%2 != 0)
      {
        for(j= (i-1)/2 ;j > 0 ; j--)
        { 
          printf(" * ");
        }
      }
    }
}
