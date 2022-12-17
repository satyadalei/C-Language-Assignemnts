/*This program takes input as float 13.45 ( for ex) then it converts
to 1345
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float priceOfItem ;
    int priceInRupees ;
    printf("\n This program takes price value as 13.45 ( for ex) then it converts to 1345 \n");
    printf("\n \n \n Enter the price: ");
    scanf("%f",&priceOfItem);
    priceInRupees = priceOfItem*100 ;
    printf("\n The price in rupees is %i", priceInRupees);
}