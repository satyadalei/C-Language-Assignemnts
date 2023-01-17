/*This program takes a text string and calculates occurence of each unique character */
#include<stdio.h>
#include<conio.h>
void main()
{
    char string[100],uniqueCharacter;
    int i,length=0,count,j;
    printf("\n This program takes a text string and calculates occurence of each unique character \n");
    printf("\n Enter any text string (maximum 100 character)\n");
    gets(string);
    /*Finding length of the string*/
    for (i = 0; i < 100; i++)
    {
       if (string[i] == '\0') /* once gets a null character then it stops */
       {
         break;
       }
       else
       {
        length++;
       }
    }
    /*counting occurenc of characters */
    for (i = 0; i < length; i++)
    {
       if (string[i] != '\0' )
       {
        count = 0;
        uniqueCharacter = string[i];
        for (j = 0; j < length; j++)
        {
            if (string[j] == uniqueCharacter)
            {
                count++;
                string[j] = '\0';
            }
        }
        printf(" %c is occured %i times \n", uniqueCharacter,count);
       }
       
    }
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}