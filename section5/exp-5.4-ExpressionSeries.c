#include<stdio.h>
#include<conio.h>
void main()
{
    /*This program prints a given expression*/
    int i,k,noOfTerms ;
    long int factorialProduct; // this is gona be very large number
    float sumOfTerms ;
    sumOfTerms = 1 ;
    printf("\n This program prints the result of a given expression. \n Enter the number of terms upto you want to calculate \n ");
    scanf("%i",&noOfTerms);
       if(noOfTerms < 2)
        {
          printf("\n Please enter a number 2 or more than 2");
        }
       else
        {
            for(i=2 ; i <= noOfTerms ; i++)
            {
                factorialProduct = 1 ;
                /*means even terms */
                if(i%2 == 0)
                {
                  /*first calculating the factorial term*/
                  for(k=1;k <= i+1 ;k++)
                  {
                     factorialProduct = factorialProduct * k ;
                  }
                  /*Calculating the expression*/
                  sumOfTerms = sumOfTerms  -  ( (float) i/factorialProduct) ;
                }
                /*means Odd terms */
                else
                {
                  /*first calculating the factorial term*/
                  for(k=1;k <= i+1 ;k++)
                  {
                     factorialProduct = factorialProduct * k ;
                  }
                  /*Calculating the expression*/
                  sumOfTerms = sumOfTerms  + (  (float) i/factorialProduct) ;
                }
            }

        }
        printf(" The sum of the term is %f ", sumOfTerms);
        /*Program Ends*/
}
