/*This program evaluates a series --> X-(X^3/3!)+(X^5/5!)+(X^7/7)+..... upto n */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int Factorial(int n);
float Series(int lastNum,int n,int x, int count);
float Power(int a, int b);
void main()
{
    int n,x;
    float seriesAns;
    printf("\n This program evaluates a series --> X-(X^3/3!)+(X^5/5!)+(X^7/7)+..... upto n \n");
    printf("\n Enter the odd value n upto which you want to calculate \n");
    scanf("%i",&n);
    printf("\n Enter the X value on which this series you want to calculate \n");
    scanf("%i",&x);
    seriesAns = Series(n,1,x,1);
    printf("\n The ans is %f \n",seriesAns);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
float Series(int lastNum,int n,int x, int count)
{
    int i = n;
    if (i <= lastNum)
    {
       if (count%2 != 0)
       {
            return ( 
                /*------Expression with (+) plus sign -------*/
                /*-------1st------------------*/  /*---------2nd-------------------*/
                ((float)Power(x,i)/Factorial(i)) - Series(lastNum,n=n+2, x, count++)
                );
       }
       else
       {
            return (
                /*------Expression with (-) minus sign -------*/ 
                /*--------3rd-----------------*/   /*-----------4th---------------*/
                ((float)Power(x,i)/Factorial(i)) + Series(lastNum,n=n+2, x, count++)
                );
       }
    }
    else
    {
        return 0;
    }
}
int Factorial(int n)
{
  if (n != 0 && n>0)
  {
    return n*Factorial(n-1);
  }
  else
  {
    return 1;
  }
  
}
float Power(int a, int b)
{
    if (b > 0)
    {
      return a*Power(a,b-1);
    }
    else
    {
      return 1;
    }
    
}