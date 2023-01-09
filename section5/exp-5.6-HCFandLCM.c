#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num1,num2,smallest, hcf,lcm;
    printf("\n Enter the two numbers of which LCM and HCF to be claculated \n");
    scanf("%i %i",&num1,&num2);
    if (num1<num2)
    {
        smallest = num1;
    }else{
        smallest = num2;
    };

    for (i = smallest; i >= 1 ; i--)
    {
        if (num1%i==0 && num2%i==0 )
        {
            hcf = i ;
            break;
        }
    };

    lcm = (num1/hcf)*(num2/hcf)*hcf ;
    printf("\n The HCF is %i and LCM is %i \n", hcf, lcm);
    printf("\n Program ends here! \n");
    
    
}