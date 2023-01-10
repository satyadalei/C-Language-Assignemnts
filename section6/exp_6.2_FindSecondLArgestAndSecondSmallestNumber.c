/*This program takes n numbers and prints 2nd Largest and 2nd Smallest number */
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,largest,smallest,smallestNumberIndex,count=0;
  printf("\n This program takes n numbers and prints 2nd Largest and 2nd Smallest number \n");
  printf("\n Enter the number of numbers you want to compare \n");

  scanf("%i",&n);
  int numbers[n];
  int ascendingNumbers[n];
  printf("\n Enter %i numbers  \n",n);
  for ( i = 0; i < n; i++)
  {
    scanf("%i",&numbers[i]);
  }
  /*Finding largest number*/   
  largest = numbers[0];
  for (i = 0; i < n; i++)
  {
    if (largest <= numbers[i])
    {
       largest = numbers[i];
    }
  }
  printf("\n The largest number is %i \n", largest);
  /* 1st loop starts*/
  for ( i = 0; i < n; i++)
  {
    smallest = numbers[i];
    /*This for loop checks smallest number in each round and once find replaces with largest number*/
    /*2nd loop ends*/
    for (j = 0; j < n; j++)
    {
        /*It checks the smallest number and it's index value in complete array*/
        if (smallest >= numbers[j])
        {
            smallest = numbers[j];
            smallestNumberIndex = j;
        }
        
        /* This creats ascending array starting from oth(as count = 0) index and sets next count and sets largest number in that place of numbers array */
        if (j == n-1)
        {
            ascendingNumbers[count] = smallest;
            count = count +1 ;
            numbers[smallestNumberIndex] = largest ;
        }
    }
    /*2nd loop ends*/
  }
  /* 1st loop ends*/
  
  /*Printing the ascending numbers*/
  printf("\n The ascending numbers are \n");
  for ( i = 0; i < n; i++)
  {
    printf(" %i ",ascendingNumbers[i]);
  }
  

  /*Printing 2nd largest and smallest numbers*/
  printf("\n The 2nd smallest number is %i \n", ascendingNumbers[1]);
  printf("\n The 2nd largest number is %i \n", ascendingNumbers[n-2]);
  

  printf("\n Program ends here \n");
  getch();
}