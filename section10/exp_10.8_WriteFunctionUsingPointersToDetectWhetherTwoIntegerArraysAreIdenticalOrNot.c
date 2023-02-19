/*This program takes two integer arrays and finds whether they are identical or not using pointer */
#include<stdio.h>
#include<conio.h>
#define ARRAY_SIZE 5


void InputIntegers(int intArray[ARRAY_SIZE]);
void PrintIntegers(int intArray[ARRAY_SIZE]);
int CheckSimilarity(int array1[ARRAY_SIZE], int array2[ARRAY_SIZE]);
void main()
{
   int integerArray1[ARRAY_SIZE];
   int integerArray2[ARRAY_SIZE];
   int similarityStatus;
    printf("\n This program takes two integer arrays and finds whether they are identical or not using pointer \n");
    printf("\n Array 1 : Enter %i integers for integer \n",ARRAY_SIZE);
    InputIntegers(integerArray1);
    printf("\n Array 2 : Enter %i integers for integer \n",ARRAY_SIZE);
    InputIntegers(integerArray2);
    
    similarityStatus = CheckSimilarity(integerArray1,integerArray2);
    PrintIntegers(integerArray1);
    PrintIntegers(integerArray2);
    similarityStatus ? printf("\n These two arrays are SAME\n") : printf("\n These two arrays are NOT SAME\n");
    printf("\n -----------Program Ends-------------- \n");
    getch();
}

int CheckSimilarity(int array1[ARRAY_SIZE], int array2[ARRAY_SIZE])
{
    int i;
    int simmilarityStatus = 1;
    for (i= 0; i < ARRAY_SIZE; i++)
    {
      if( *(array1+i) != *(array2+i) )
      {
        simmilarityStatus = 0;
        break;
      }
      
    }
    
    return simmilarityStatus;
}
void InputIntegers(int intArray[ARRAY_SIZE])
{
  int i;
  for (i = 0; i < ARRAY_SIZE; i++)
  {
    printf("\n Enter %i no integer element : ",i+1);
    scanf("%i",(intArray+i));
  }
}
void PrintIntegers(int intArray[ARRAY_SIZE])
{
  int i;
  printf("\n The elements are : \n");
  for (i = 0; i < ARRAY_SIZE; i++)
  {
    printf("   %i  ",*(intArray+i));
  }
}