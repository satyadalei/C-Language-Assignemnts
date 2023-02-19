/*This program takes two complex number and adds them using structure */
#include<stdio.h>
#include<conio.h>

struct complex
{
    float realPart;
    float imaginaryPart;
};
//struct complex complexNum1;
struct complex Add(struct complex num1,struct complex num2);
void main()
{
    struct complex complexNum1,complexNum2,result;
    printf("\n This program takes two complex number and adds them using structure \n");
    printf("\n Enter first complex num \n");
    printf("\n Enter real part and imaginary part of first complex number :");
    scanf("%f %f",&complexNum1.realPart, &complexNum1.imaginaryPart);
    printf("\n Enter real part and imaginary part of second complex number :");
    scanf("%f %f",&complexNum2.realPart, &complexNum2.imaginaryPart);
    result = Add(complexNum1,complexNum2);
    printf("\n Two complex number are %.2f+%.2fi and  %.2f+%.2fi \n",complexNum1.realPart,complexNum1.imaginaryPart,complexNum2.realPart,complexNum2.imaginaryPart);
    printf("\n The sum of two complex number is %.2f+%.2fi \n",result.realPart,result.imaginaryPart);
    printf("\n-------------Program Ends---------------\n");
    getch();
}

struct complex Add(struct complex num1,struct complex num2)
{
  struct complex result;
  result.realPart = num1.realPart + num2.realPart;
  result.imaginaryPart = num1.imaginaryPart + num2.imaginaryPart;
  return result;
}