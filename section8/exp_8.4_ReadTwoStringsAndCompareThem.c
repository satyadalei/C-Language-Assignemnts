/* This program takes two strings and compares them whether they are same or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    char string1[100], string2[100];
    int i,lengthString1,lengthString2,maxLength,compareStatus = 1; /* Compare status = 1 means true i.e they are same if 0 then false*/
    printf("\n This program takes two strings and compares them whether they are same or not\n");
    printf("\n Enter the string1 \n");
    gets(string1);
     /*Length of string1*/
     for (i = 0; i < 100; i++)
     {
        if (string1[i] == '\0') /* counts and came out of the loop when finds null character */
        {
          lengthString1 = i;
          printf("\n The length of string1 is %i\n",lengthString1);
          break;
        }
     }
     
    printf("\n Enter the string2 \n");
    gets(string2);
    /* length of string2 */
    for ( i = 0; i < 100 ; i++)
    {
        if ( string2[i] == '\0')
        {
           lengthString2 = i;
           printf("\n The length of string2 is %i \n",lengthString2);
           break;
        }
    }
    /* calculating maximum length of string */
    if(lengthString1 >= lengthString2 )
    {
        maxLength = lengthString1;
    }
    else
    {
        maxLength = lengthString2;
    }
    
    /*Comparision of stringscd*/
    for ( i = 0; i < maxLength; i++)
    {
        if (string1[i] != string2[i])
        {
           compareStatus = 0 ;
           break;
        }
    }
    if (compareStatus == 1)
    {
       printf("\n The two strings are same \n");
    }
    else
    {
        printf("\n The two strings are NOT same \n");
    }
    

    printf("\n -----------Program Ends-------------- \n");
    getch();
}