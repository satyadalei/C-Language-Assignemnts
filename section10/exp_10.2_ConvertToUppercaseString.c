/*This program takes a string from user and converts all its letter to Uppercase string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void Capitalize( char string[] );
void main()
{
    char string[100];
    int i;
    printf("\n This program takes a string from user and converts all its letter to Uppercase string\n");
    printf("\n Enter the string \n");
    gets(string);
    Capitalize(string);
    /*Printing of string*/
    printf("\n Your string has been capitalized \n");
    for ( i = 0; i < 100; i++)
    {
      if (string[i] == '\0')
      {
        break;
      }
      else
      {
        printf("%c",string[i]);
      }
    }
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void Capitalize( char string[] )
{
  int i,a,b,charAsciiValue;
  char currentChar;
  for (i = 0; i < 100; i++)
  {
    if ( string[i] == '\0' )
    {
        break;  
    }
    else
    {
      currentChar = string[i];
      charAsciiValue = currentChar;
      if (97 <= charAsciiValue &&  charAsciiValue <= 122)
      {
        charAsciiValue = charAsciiValue - 32 ;
        string[i] = charAsciiValue;
      }
    }
  }
  
}