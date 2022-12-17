#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("\n This program takes a integer and tells whether it is Odd or Even :");
    printf("\n\n\n\n\ Enter the number :");
    scanf("%i", &number);
    if( number%2 == 0){
        printf("\n The Entered number %i is an even number \n", number);
    }else{
       printf("\n The Entered number %i is an odd number \n", number);
    }
    printf("\n Program Ends");
}
