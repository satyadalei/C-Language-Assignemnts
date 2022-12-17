/*This statement takes a four digit integer and finds sum of digits */
#include<stdio.h>
#include<conio.h>
void main()
{
    int initialNum, sum, num2;
    printf("This statement takes a four digit integer and finds sum of digits");
    printf("\n ==================================================================");
    printf("\n Enter the four digit integer :");
    scanf("%i", &initialNum);
     /* without Using for loop */
    sum = 0 ;
    num2 = initialNum ;
    sum = sum + initialNum % 10 ;
    initialNum = initialNum/10 ;

    sum = sum + initialNum % 10 ;
    initialNum = initialNum/10 ;

    sum = sum + initialNum % 10 ;
    initialNum = initialNum/10 ;

    sum = sum + initialNum % 10 ;
    initialNum = initialNum/10 ;

    printf("\n Your entered number is %i and the sum of digits is : %i ", num2, sum);
    getch();
}
