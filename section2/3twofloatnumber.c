/*This program takes two float numbers and divides them and displays the result*/
#include<stdio.h>
void main()
{
    float num1, num2, divide;
   /* printf("\n Enter two float number : \n");
    scanf("%f %f", &num1, &num2); */
    printf("\n Enter the first number : \n");
    scanf("%f", &num1);
    printf("\n Enter the second number : \n");
    scanf("%f", &num2);
    divide = num1/num2 ;
    printf("\n The result of num1(%f)/num2(%f) is %f",num1,num2 ,divide);
} 