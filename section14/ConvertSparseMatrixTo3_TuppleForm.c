/*This program converts a sparse matrix into 3-tupple form*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int m, n, *ptr1, *ptr2;
    int i, j, k, l, count = 0;
    printf("\n This program converts a sparse matrix into 3-tupple form \n");
    printf("\n Enter m and n to form mXn sparse matrix :");
    scanf("%d %d", &m, &n);
    ptr1 = (int *)malloc(m * n * sizeof(int));
    printf("\n Enter %d elements : \n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", ((ptr1 + i * n) + j));
        }
    }
    printf("\n Your sparse matrix is :\n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("   %d   ", *((ptr1 + i * n) + j));
        }
        printf("\n");
    }

    // step 4 assign remaining elements

    // step 1 count non zero numbers
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*((ptr1 + i * n) + j) != 0)
            {
                count++;
            }
        }
    }
    // step 2 create a 3 tuple matrix
    ptr2 = (int *)malloc((count + 1) * 3 * sizeof(int));

    // step 3 assign 3 first matrices in tupple matrix
    *(ptr2) = m;
    *(ptr2 + 1) = n;
    *(ptr2 + 2) = count;

    k = 1; // starting from second row
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*((ptr1 + i * n) + j) != 0)
            {
                *((ptr2 + k * n) + 0) = i;
                *((ptr2 + k * n) + 1) = j;
                *((ptr2 + k * n) + 2) = *((ptr1 + i * n) + j);
                k++;
            }
        }
    }

    printf("\n Now the 3 tupple form of above matrix : \n");
    for (i = 0; i < count+1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("   %d   ",*((ptr2+i*n)+j));
        }
        printf("\n");
    }
}