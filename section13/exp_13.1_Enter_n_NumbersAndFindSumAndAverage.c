/* This program takes n numbers during run time of program and finds sum and averages of these number */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int *p,n,i,sum=0;
   float average;
  // p = (int *)malloc(5*(sizeof(int)));
   printf("\n This program takes n numbers during run time of program and finds sum and averages of these number \n");
   printf("\nEnter the number of integers you want to enter");
   scanf("%d",&n);
   p = (int *)malloc(n*(sizeof(int)));
   printf("\nEnter %d integers :\n",n);
   for (i = 0; i < n; i++)
   {
     scanf("%d",(p+i));
   }
   printf("\nThe %d integers are :\n",n);
   /*Sum of integers*/
   for (i = 0; i < n; i++)
   {
    printf("  %d  ",*(p+i));
    sum = sum + *(p+i);
   }
   /*Average of integers*/
   average = (float) sum/n;
   
   printf("\n Sum and Average of entered number are %d, %f respectively \n",sum,average);
   
   
   printf("\n -----------Program Ends-------------- \n");
   getch();
}