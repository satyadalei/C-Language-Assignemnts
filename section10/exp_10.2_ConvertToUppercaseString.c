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
    puts(string);
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void Capitalize( char string[] )
{
  strupr(string);
}