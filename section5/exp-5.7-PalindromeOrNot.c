#include<stdio.h>
#include<conio.h>
void main()
{
  int number, initialNumber, remainder, reverseNumber ;
  int i;
  reverseNumber = 0 ;
  printf("\n This program takes a number and reverse that number and checks whether pallindrome or not \n");
  printf("\n Enter a number \n");
  scanf("%i",&initialNumber);
  number = initialNumber ; /*This number is going to change*/
//   while (number != 0)
//   {
//     remainder = number%10 ;
//     number = number/10;
//     reverseNumber = reverseNumber*10 + remainder ;
//   }
 for (i = number; i != 0;  i = i/10 ) 
 {
    remainder = i%10;
    reverseNumber = reverseNumber*10 +remainder;
 }
 
  
  printf("\n The reverse number is %i \n", reverseNumber);
  if (reverseNumber == initialNumber)
  {
   printf("\n It is a pallindrome number \n");
  }
  else{
    printf("\n It is NOT a pallindrome number \n"); 
  }
  
  getch();
}