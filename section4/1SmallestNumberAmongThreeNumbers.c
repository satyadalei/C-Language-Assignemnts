/* This program takes three numbers and computes the smallest number*/
#include <stdio.h>
#include<conio.h>
void main()
{
    int num1, num2,num3;
    printf("\n This program takes three numbers and computes the smallest number \n");
    printf("\n Enter the three numbers: ");
    scanf("%i %i %i", &num1, &num2,&num3);
    if(num1 < num2)
    {
        if(num1< num3){
            // num1 is smallest
            printf("\n %i is smallest", num1);
        }else{
            // num3 is smallest
            printf("\n %i is smallest", num3);
        }
    }
    else
    {
      if(num2 < num3){
         // num2 smallest
         printf("\n %i is smallest", num2);
      }else{
         // num3 smallest
         printf("\n %i is smallest", num3);
      }
    }

    printf("\n Program Ends - Enter any keys to exit ");
    getch();
}
