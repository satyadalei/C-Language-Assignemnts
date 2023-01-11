/*This program reads n rael numbers and and insert a given number and increases array size */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,insertedNumber,insertPosition,initialNumber,nextNumber;
   printf("\n This program reads n rael numbers and and insert a given number and increases array size \n");
   printf("\n Enter the number of numbers you want to have in array \n");
   scanf("%i",&n);
   /*But creating an array with n+1 elements */
   int numbers[n+1];
   /*Taking n elements from user keeping last one empty or null or Zero*/
   printf("\n Enter %i numbers\n",n);
   for ( i = 0; i < n; i++)
   {
     scanf("%i",&numbers[i]);
   }
   /* stepping all elements one step */
   printf("\n Enter the number you want to insert \n");
    scanf("%i",&insertedNumber);
   printf("\n Enter at which position you want to insert starting from 0 to %i \n",n);
    scanf("%i",&insertPosition);
   
   /* Insertion process starts here*/
   initialNumber = numbers[insertPosition];
   numbers[insertPosition] = insertedNumber;
   for ( i = insertPosition+1; i < n+1 ; i++)
   {
     nextNumber = numbers[i];
     numbers[i] = initialNumber;
     initialNumber = nextNumber ;
   }
   printf("\n The new numbers after insertion \n");
   for ( i = 0; i < n+1; i++)
   {
     printf(" %i ",numbers[i]);
   }
   
   printf("\n Program Ends \n");
   getch();
}