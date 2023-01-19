/*This program takes a string from user and prints in alphabetical order */
#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    char string[100], character;
    int i,j,lengthOfString,count=0,asciiValue,smallest,numCount=0,smallestIndex;
    int largest;
    printf("\n This program takes a string prints orderly \n");
    printf("\n Enter a string \n");
    gets(string);
     lengthOfString = strlen(string);
     printf("\n The length is %i \n",lengthOfString);
    int numbers[lengthOfString];
    int OrderedNumbers[lengthOfString];
    /* Storing the ascii numbers of characters in numbers array */
     for ( i = 0; i < lengthOfString; i++)
     {
        asciiValue = string[i] ;
        numbers[count] = asciiValue;
        count++;
     }
     /*finding largest numbers among the ascii numbers */
     largest = numbers[0];
     for ( i = 0; i < lengthOfString; i++)
     {
        if (largest <= numbers[i] )
        {
           largest = numbers[i];
        }
     }
    
    /* Reordering the ascii numbers in ascending order*/
     for ( i = 0; i < lengthOfString; i++)
     {
        smallest = numbers[i];
       for (j = 0; j < lengthOfString; j++)
       {
         if (smallest >= numbers[j])
         {
            smallest = numbers[j];
            smallestIndex = j;
         }
         if (j == lengthOfString-1)
         {
            numbers[smallestIndex] = largest;
            OrderedNumbers[numCount] = smallest;
            numCount++;
         }
       }
     }
     printf("\n");
     printf("\n The string in alphabetical order \n");
    for ( i = 0; i < lengthOfString; i++)
    {
        character = OrderedNumbers[i];
        printf("%c",character);
    }
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}