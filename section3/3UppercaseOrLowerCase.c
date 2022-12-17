/* This Program takes one input character and finds it whether upper case or lower case*/
#include<stdio.h>
void main()
{
   char  ch1 ;
   int characterInAscii ;
   printf("\n This Program takes one input character and finds it is whether upper case or lower case \n");
   printf("====================================================================");
   printf("\n Enter the character \n");
   scanf("%c", &ch1);
   characterInAscii = ch1 ;
   ( ch1 >= 65 && ch1 <= 90) ? printf("\n The character %c is Upper case \n",ch1) : printf("\n The character %c is Lower case \n", ch1) ;
}

