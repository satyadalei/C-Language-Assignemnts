/*This program is a menu based program using dynamic memory based on user input */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void InsertAnElement(int *p, int a);
void SortIntegerArray(int *p, int arrayLength);
void MergeBothArrays(int *p1, int *p2, int noOfArray1Elements, int noOfArray2Elements);
void main()
{
    int *p1, *p2, noOfarray1Elements, noOfarray2Elements;
    int i, exitStatus = 1, menuOption;
    printf("\n This program is a menu based program using dynamic memory based on user input");
    /*---------Array 1------------------*/
    printf("\n Enter number of integers you want to put in FIRST (1st) array :");
    scanf("%d", &noOfarray1Elements);
    p1 = (int *)malloc(noOfarray1Elements * sizeof(int));

    printf("\nEnter %d integers in array1 :\n", noOfarray1Elements);
    for (i = 0; i < noOfarray1Elements; i++)
    {
        scanf("%d", (p1 + i));
    }
    /*--------Array 2-----------------*/
    printf("\n Enter number of integers you want to put in SECOND (2nd) array :");
    scanf("%d", &noOfarray2Elements);
    p2 = (int *)malloc(noOfarray2Elements * (sizeof(int)));
    printf("\nEnter %d inters in array2 :\n", noOfarray2Elements);
    for (i = 0; i < noOfarray2Elements; i++)
    {
        scanf("%d", (p2 + i));
    }

    /*=========== Menu based options=================*/
    printf("\nEnter number to perform corresponding task -->\n");
    printf("\n1. Insert an element in 1st array.");
    printf("\n2. Sort 1st array.");
    printf("\n3. Sort 2nd array.");
    printf("\n4. Merge the two arrays.\n");
    scanf("%d", &menuOption);

    if (menuOption >=1 && menuOption <= 4)
    {
        switch (menuOption)
        {
        case 1:
            InsertAnElement(p1, noOfarray1Elements);
            break;

        case 2:
            SortIntegerArray(p1, noOfarray1Elements);
            break;

        case 3:
            SortIntegerArray(p2, noOfarray2Elements);
            break;

        case 4:
            MergeBothArrays(p1, p2, noOfarray1Elements, noOfarray2Elements);
            break;
        }
    }
    else
    {
        printf("\n You did not entered any proper number.");
    }
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void InsertAnElement(int *p, int a)
{
    int i, num;
    p = (int *)realloc(p, (a + 1) * sizeof(int));
    printf("\n Enter the number you want to enter :");
    scanf("%d", &num);
    *(p + a) = num;
    printf("\n After insertion the new array is :");
    for (i = 0; i < a + 1; i++)
    {
        printf("   %d   ", *(p + i));
    }
}

void SortIntegerArray(int *p, int arrayLength)
{
    int i, j, num;
    for (i = 0; i < arrayLength - 1; i++)
    {
        for (j = i + 1; j < arrayLength; j++)
        {
            if (*(p + i) > *(p + j))
            {
                num = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = num;
            }
        }
    }
    /*----------------Printing of sorted array---------------*/
    printf("\n After sorting elements are : \n");
    for (i = 0; i < arrayLength; i++)
    {
        printf("   %d   ", *(p + i));
    }
}
void MergeBothArrays(int *p1, int *p2, int noOfArray1Elements, int noOfArray2Elements)
{
    int i, n, j;
    n = noOfArray1Elements + noOfArray2Elements;
    p1 = (int *)realloc(p1, n * sizeof(int));
    for (i = noOfArray1Elements, j = 0; i < n; i++, j++)
    {
        *(p1 + i) = *(p2 + j);
    }
    printf("\n After merging two arrays new array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("  %d  ", *(p1 + i));
    }
}