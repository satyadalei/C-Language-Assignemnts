/*This program finds the frequency of occurence of each number in an Array */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,currentNum,count;
    printf("\n This program finds the frequency of occurence of each number in an Array \n");
    printf("\n Enter the number of numbers you want to put in a Array \n");
    scanf("%i",&n);
    printf("\n Enter %i numbers \n",n);
    int numbers[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%i",&numbers[i]);
    }
    for ( i = 0; i < n ; i++)
    {
        if (numbers[i] != -1) /*This is to check the already counted number*/
        {
            count = 0 ;
            currentNum = numbers[i];
            for (j = 0; j < n; j++)
            {
                if (currentNum == numbers[j] )
                {
                    count++;
                    numbers[j] = -1;
                } 
            }
           printf("\n Frequency of %i is %i \n",currentNum, count)    ;
        }
    }

    printf("\n Program Ends \n",n);
    getch();
}