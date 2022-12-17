/* This program takes a owner name and the amount of used electricity units and prints charges applied bassed on number of electric units */
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    float electricUnit , charges;
    printf("This program takes a owner name and the amount of used electricity units and prints charges applied bassed on number of electric units");
    printf("\n\n Enter your name below : \n");
    gets(name);
    //scanf("%[^\n]s", name);
    // printf("%s", name); prints  the name
    printf("\n Enter the Electric Bill amount :");
    scanf("%f", &electricUnit);
    if(electricUnit <= 200)
    {
      charges = electricUnit*(0.80) + 100 ;
    }
    else if( electricUnit > 200 && electricUnit <= 300  )
    {
        charges = 200*(0.80) + (electricUnit - 200)*(1.30) + 100 ;
    }
    else
    {
       charges = 200*(0.80) + 100*(1.30) + (electricUnit-300)*(2.00) + 100 ;
    }

    if(charges > 400 )
    {
        charges = charges + charges*( (float) 15/100 );
    }

    /* Final prints with Bill*/
    printf("\n The consumer name :  ");
    puts(name);
    printf("\n The consumer electricity charges : %f ", charges );

    /*program ends*/
    getch();
}
