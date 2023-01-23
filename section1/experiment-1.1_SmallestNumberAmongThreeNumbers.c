/*This program takes three number and prints the smallest number among them*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,smallest;
    printf("\n This program takes three number and prints the smallest number among them \n");
    printf("\n Enter the three numbers \n");
    scanf("%i %i %i",&a,&b,&c);
    printf("\n Your three numbers are %i %i %i \n",a,b,c);
    smallest = a;
    if (smallest >= b)
    {
        smallest = b;
    }
    if (smallest >=c )
    {
       smallest = c;
    }
    printf("\n The smallest number among %i, %i, %i is %i \n",a,b,c,smallest);
    printf("\n -------------Program Ends---------- \n");
}