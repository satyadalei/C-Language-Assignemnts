/*This program takes any strings from user and then calculates it's length */
#include<stdio.h>
#include<conio.h>
void main()
{
    char string[100];
    int i,length=0;
    printf("\n This program takes any strings from user and then calculates it's length \n");
    printf("\n Enter any string or your name or anything \n");
    gets(string);
    //puts(string);
    for ( i = 0; i < 100; i++)
    {
       if (string[i] == '\0' ) 
       {
        /*printf("\n Last index was %i \n",i); */
        /* We can also use this to calculate length */
        break;
       }
       else
       {
        length++ ;
       }
    }
    printf("\n The length of given string is %i \n",length);
    printf("\n--------------Program Ends----------------\n");
    getch();
}