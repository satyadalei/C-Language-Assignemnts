/*This program takes some numbers from users and sorts them in descending order */ 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n ,i,j,largest, smallest ;
    int largestNumberIndex = 0 ;
    int count = 0;
    printf("\n This program takes some numbers from users and sorts them in descending order \n");
    printf("\n Enter the number of numbers you want to enter \n");
    scanf("%i", &n);
    int numbers[n];
    int descendingNumbers[n];
    printf("\n Enter the %i numbers \n", n);
    for ( i = 0; i < n; i++)
    {
       scanf("%i", &numbers[i]);
    }
    /*Finding the largest number*/ 
    largest = numbers[0];
    for (i = 0; i < n; i++)
    {
        if (largest < numbers[i])
        {
            largest = numbers[i];
        }
        
    }
     printf("\n The largest number is %i \n", largest);
    /*Finding the smallest number*/ 
    smallest = numbers[0];
    for (i = 0; i < n; i++)
    {
        if (smallest > numbers[i])
        {
            smallest = numbers[i];
        }
        
    }
    printf("\n The smallest number is %i \n", smallest);
   for (i = 0; i < n; i++)
   {
        largest = numbers[0];
        for (j = 0; j < n; j++)
        {
            if (largest <= numbers[j])
            {
                largest = numbers[j];
                largestNumberIndex = j ;
            }
            if (j == n-1)
            {
            descendingNumbers[count] = largest;
            count = count+1 ;
            numbers[largestNumberIndex] = smallest ;
            }
        }
   }
    printf("\n The numbers in descending otrder are \n");
    for ( i = 0; i < n; i++)
    {
        printf(" %i ",descendingNumbers[i]);
    }
    
   
    

    printf("\n Program Ends here \n");
    getch();
}