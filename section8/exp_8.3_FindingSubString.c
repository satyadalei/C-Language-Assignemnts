/*This program takes a string and prints a substring within two position given by user */
#include<stdio.h>
#include<conio.h>
void main()
{
    char string[100];
    int i,length,n1,n2,j,noOfElementsInSubstring;
    printf("\n This program takes a string and prints a substring within two position given by user \n");
    printf("\n Enter the string (max length 100) \n");
    gets(string);
    printf("\n To print the sub string enter staring position value(n1) \n");
    scanf("%i",&n1);
    printf("\n To print the sub string enter ending number value(n2) \n");
    scanf("%i",&n2);
    /*Length of the string*/
    for ( i = 0; i < 100; i++)
    {
        if (string[i] == '\0')
        {
           length = i;
           break;
        }
    }
    if (n2-n1 > 0 && n2 <= length && n1>= 1) /* User entered valid positin */
    {
        noOfElementsInSubstring = n2-n1+1 ;
        char subString[noOfElementsInSubstring]; /*2 is added to include both end point elements*/
        for (i = 0, j=n1-1; i < noOfElementsInSubstring; i++,j++)
        {
            subString[i] = string[j] ;
        }
        /*printing the sub string */
        for(i=0;i<noOfElementsInSubstring;i++)
        {
            printf("%c",subString[i]);
        }
    }
    else
    {
        printf("\n You have entered the wrong position \n");
    }
    
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}