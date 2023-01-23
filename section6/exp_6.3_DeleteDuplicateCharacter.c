/*This program takes some number of characters and then deletes the duplicate characters */
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,j,count=0;
   char currentCharacter;
   printf("\n This program takes some number of characters and then deletes the duplicate characters \n");
   printf("\n Enter the number of characters you want to enter : \n");
   scanf("%i",&n);
   printf("\n Enter the %i characters \n",n);
   char charactersArray[n] ;
   char reducedCharctersArray[n];
   for(i = 0; i < n; i++)
   {
      scanf("%s", &charactersArray[i]);
   }

   for(i = 0; i < n; i++)
   {
     /*
        This (if statement below) check of null character is helful to avoid un nessesary check because
        we are replacing all duplicate characters with null characters so that computer
        will avoid chacking again.
     */
     if (charactersArray[i] != '\0')
     {
        /* storing the character in separate variable because we will
        replace all duplicate elements with null character */
        currentCharacter = charactersArray[i];
        for (j = 0; j < n; j++)
        {
           /* Setting same characters to null characters */
           if ( currentCharacter == charactersArray[j] )
           {
             charactersArray[j] = '\0' ;
           }
        }
        /* creating new array with non duplicated(unique) characters */
        reducedCharctersArray[count] = currentCharacter ;
        count++;
     }
   }
   /* Replacing the unnessesary garbage value of new reduced array with  */
   for( i = count ; i < n; i++)
   {
    reducedCharctersArray[i] = ' ';
   }

   printf("\n The new character array is : \n");
   for ( i = 0; i < n; i++)
   {
      printf(" %c ",reducedCharctersArray[i]);
   }


   printf("\n Program Ends here \n");
   getch();
}
