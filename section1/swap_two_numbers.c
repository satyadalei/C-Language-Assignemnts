/*This program takes two numbers as num1 & num2
swaps them --> method 1 using third variable*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello world");
    int num1 ;
    int num2 ;
    printf("Enter the first numer ");
     scanf("%i" , &num1);
    printf("Enter the second number ");
     scanf("%i", &num2);
    printf("\n The num1 is %i and the num2 is %i", num1, num2);
    //Goal --> write some code here so that num1 = 40 and num2 = 20
      // Method 1 --> using a third variable
      int num3 ;  // third variable
      num3 = num1 ;
      num1 = num2 ;
      num2 = num3 ;

    printf("\n Later");
    printf("\n The num1 is %i and the num2 is %i", num1, num2);

    // the end function
    getch();
}
