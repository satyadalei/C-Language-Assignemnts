/*This program takes a string and deletes multiple times occuring elements using pointer */
#include<stdio.h>
#include<conio.h>
#include<string.h>
//int stringSize = 100;
void DeleteCharacterFromString(char string[],int stringSize, char character);
void main()
{
   char string[100];
   int size = 100;
   char deleteCharacter;
   void (*functionPointer)();
   functionPointer = DeleteCharacterFromString;
   printf("\n This program takes a string and deletes multiple times occuring elements using pointer \n");
   printf("\n Enter the string \n");
   gets(string);
   printf("\n Enter the character you want to delete in the string \n");
   scanf("%c",&deleteCharacter);
   // DeleteCharacterFromString(string,size,deleteCharacter);
   (*functionPointer)(string,size,deleteCharacter);
   printf("\n -----------Program Ends-------------- \n");
   getch();
}
void DeleteCharacterFromString(char string[],int stringSize, char character)
{
  int lengthOfString = strlen(string);
  int i,j;
  /*First it places null value in that corresponding character position*/
  for ( i = 0; i < lengthOfString; i++)
  {
      if (string[i] == character)
      {
         string[i] = '\0';
      }
  }
  /*Reconstructing the string*/
  for ( i = 0; i < lengthOfString; i++)
  {
    if (string[i] == '\0')
    {
      for (j = i+1; j < lengthOfString; j++)
      {
         if (string[j] != '\0')
         {
           string[i]  = string[j];
           string[j] = '\0';
           break;
         }
      }
      
    }
    
  }
  
  printf("\n After removing that characters from string\n");
  puts(string);

}