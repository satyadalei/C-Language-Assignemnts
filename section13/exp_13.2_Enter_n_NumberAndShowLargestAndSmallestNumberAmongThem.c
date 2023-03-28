/* This program takes n numbers during run time of program and finds Smallest and Largest number among these number */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int *p,n,i,j,a;
   int largest,smallest;
   
   printf("\n This program takes n numbers during run time of program and finds Smallest and Largest number among these number \n");
   printf("\nEnter the number of integers you want to enter");
   scanf("%d",&n);
   p = (int *)malloc(n*(sizeof(int)));
   printf("\nEnter %d integers :\n",n);
   for (i = 0; i < n; i++)
   {
     scanf("%d",(p+i));
   }
   printf("\nThe %d integers are :\n",n);
   /*All entered of integers*/
   for (i = 0; i < n; i++)
   {
    printf("  %d  ",*(p+i));
   }
   
   for (i = 0; i < n-1 ; i++)
   {
      for (j = i+1; j < n; j++)
      {
        if (*(p+i) > *(p+j))
        {
          a = *(p+i);
          *(p+i) = *(p+j);
          *(p+j) = a;
        }
              
      }
   }

   /*Finding the largest number*/
   largest = *(p+i);
   smallest = *(p+i);
   for (i = 0; i < n; i++)
   {
      if (largest < *(p+i))
      {
        largest = *(p+i);
      }
      if (smallest > *(p+i))
      {
        smallest = *(p+i);
      }
   }

   /*Sorting of all elements */
   printf("\n All elements in ascending order :\n");
   for (i = 0; i < n; i++)
   {
     printf("  %d  ",*(p+i));
   }

   
   printf("\n Largest number is %d and smallest number is %d ",largest,smallest);
   
   printf("\n -----------Program Ends-------------- \n");
   getch();
}