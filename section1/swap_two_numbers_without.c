/*This program takes two input numbers and swaps them without the third variable*/
// method2
#include <stdio.h> // contains information on printf -- this helps to work with input and output data
#include <conio.h> // contains information on getch

void main()
{
    int num1 , num2;
    printf("\n Enter the first number: ");
     scanf("%i", &num1);
    printf("\n Enter the second number: ");
     scanf("%i", &num2);
    printf("\n Your first number is %i and second number is %i .", num1, num2) ;
    printf("\n Now it will be changed :");
    num1 = num1 + num2 ;
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;

    printf("\n Number swaped --> Your first number is %i and second number is %i ", num1, num2);

    getch();
}
