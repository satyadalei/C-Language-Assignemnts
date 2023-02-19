/*This program takes a mXn matrix and sorts it's elements in ascending order and prints 2nd Largest and 2nd Smallest number*/
#include <stdio.h>
#include <conio.h>
int m, n;
void SortArrayIntegers(int integerArray[][n], int m, int n);
int FindSecondLargest(int integerArray[][n], int m, int n);
int FindSecondSmallest(int integerArray[][n], int m, int n);
void main()
{
    int i, j;
    int secondSmallest, secondLargest;
    printf("\n This program takes a mXn matrix and sorts it's elements in ascending order and prints 2nd Largest and 2nd Smallest number \n");
    printf("\n Enter m to form mXn matrix\n");
    scanf("%i", &m);
    printf("\n Enter n to form mXn matrix\n");
    scanf("%i", &n);
    int integerArray[m][n];
    printf("\n Enter %i elements \n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\n Enter array[%i][%i] element :", i, j);
            scanf("%i", &integerArray[i][j]);
        }
    }
    printf("\n Your entered elements are : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i\t", integerArray[i][j]);
        }
        printf("\n");
    }
    SortArrayIntegers(integerArray, m, n);

    /*============= Finding 2nd smallest and Largest ================ */
    secondSmallest = FindSecondSmallest(integerArray,m ,n );
    secondLargest = FindSecondLargest(integerArray, m, n);

    printf("\n Second smallest integer is : %i \n", secondSmallest);
    printf("\n Second largest integer is : %i \n", secondLargest);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
/*----------------------------Function sorting 2D Array---------------------------*/
void SortArrayIntegers(int integerArray[][n], int m, int n)
{
    int i, j, k, l, a;
    /*sorting of elements*/
    for (i = 0; i < m; i++) /*row*/
    {
        for (j = 0; j < n; j++) /*column*/
        {
            for (k = 0; k < m; k++) /*row*/
            {
                for (l = 0; l < n; l++)
                {
                    if (integerArray[i][j] < integerArray[k][l])
                    {
                        a = integerArray[i][j];
                        integerArray[i][j] = integerArray[k][l];
                        integerArray[k][l] = a;
                    }
                }
            }
        }
    }
    /*sorting done*/
    /*==========After Sorting=================*/
    printf("\n After sorting elements is \n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i\t", integerArray[i][j]);
        }
        printf("\n");
    }
}
/*----------------------------Function finding  2nd Largest ---------------------------*/
int FindSecondLargest(int integerArray[][n], int m, int n)
{
    int i, j;
    int preValue, secondLargest = -1, largestCount = 0;
    preValue = integerArray[m - 1][n - 1];
    for (i = m - 1; i >= 0; i--)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (preValue != integerArray[i][j])
            {
                secondLargest = integerArray[i][j];
                largestCount = 1;
                break;
            }
            /*in case all elements are same in matrix*/
            else if (i == 0 && j == 0 && secondLargest == -1)
            {
                secondLargest = integerArray[i][j];
            }
        }
        if (largestCount == 1)
        {
            break;
        }
    }

    return secondLargest;
}
/*----------------------------Function finding  2nd smallest ---------------------------*/
int FindSecondSmallest(int integerArray[][n], int m, int n)
{
    int i, j;
    int preValue, secondSmallest = -1, smallestCount = 0;
    preValue = integerArray[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (preValue != integerArray[i][j])
            {
                secondSmallest = integerArray[i][j];
                smallestCount = 1;
                break;
            }
            /*in case all elements are same in matrix*/
            else if (i == m - 1 && j == n - 1 && secondSmallest == -1)
            {
                secondSmallest = integerArray[i][j];
            }
        }
        if (smallestCount == 1)
        {
            break;
        }
    }
    return secondSmallest;
}