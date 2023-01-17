/*This program takes two matrices and performs different tasks based on user input*/
#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>
void main()
{
    int m1,n1,m2,n2,i,j,menuNumber,exitStatus=1;
    printf("\n This program takes two matrices and performs different tasks based on user input \n");
    printf("\n Enter m1,n1,m2,n2 values to produce m1Xn1 and m2Xn2 matrix \n");
    printf("\n Enter m1 value \n");
    /*taking rows and columns*/
        scanf("%i",&m1);
        printf("\n Enter n1 value \n");
        scanf("%i",&n1);
        int A[m1][n1];
        printf("\n Enter %i elements to form %iX%i matrix A\n",m1*n1,m1,n1);
          for ( i = 0; i < m1; i++)
          {
            for (j = 0; j < n1; j++)
            {
                scanf("%i",&A[i][j]);
            } 
          }
        printf("\n Enter m2 value \n");
        scanf("%i",&m2);
        printf("\n Enter n2 value \n");
        scanf("%i",&n2);
        int B[m2][n2];
        printf("\n Enter %i elements to form %iX%i matrix B \n",m2*n2,m2,n2);
         for ( i = 0; i < m2; i++)
          {
            for (j = 0; j < n2; j++)
            {
                scanf("%i",&B[i][j]);
            } 
          }
    int sum[m1][n1];
    int diff[m1][n1];
    do
    {
       printf("\n Enter corresponding number value to perform different task \n")  ;
       printf("\n 1. A+B \n");
       printf("\n 2. A-B \n");
       printf("\n 3. B-A \n");
       printf("\n 4. AXB \n");
       printf("\n 5. Exit \n");
       scanf("%i",&menuNumber);

       switch (menuNumber)
       {
        /*---------- Case 1: sum of two matrices ----------*/
       case 1:
        if (m1 == m2 && n1 == n2)
        {
           for (i = 0; i < m1; i++)
           {
             for (j = 0; j < n1; j++)
             {
               sum[i][j] = A[i][j] + B[i][j];
               printf("  %i  ", sum[i][j]);
             }
             printf("\n");
           }
        }
        else
        {
          printf("\n This task can't be performed because no columns or no of rows not equal in both rows \n");
        }
        break;
      /*---------- Case 2: Diff of two matrices ----------*/
      case 2:
      if (m1 == m2 && n1 == n2)
        {
           for (i = 0; i < m1; i++)
           {
             for (j = 0; j < n1; j++)
             {
               diff[i][j] = A[i][j] - B[i][j];
               printf("  %i  ", diff[i][j]);
             }
             printf("\n");
           }
        }
        else
        {
          printf("\n This task can't be performed because no columns or no of rows not equal in both rows \n");
        }
      break;
      /*---------- Case 3: Diff of two matrices reverse ----------*/
      case 3:
      if (m1 == m2 && n1 == n2)
        {
           for (i = 0; i < m1; i++)
           {
             for (j = 0; j < n1; j++)
             {
               diff[i][j] = B[i][j] - A[i][j];
               printf("  %i  ", diff[i][j]);
             }
             printf("\n");
           }
        }
        else
        {
          printf("\n This task can't be performed because no columns or no of rows not equal in both rows \n");
        }
      break;
      /*---------- Case 4: AXB ----------*/
      case 4:







      
      break;
      /*---------- Case 5: Exit ----------*/
      case 5:
        // exit(0);
        exitStatus = 0 ;


       default:
        break;
       }

    } while(exitStatus == 1);
      
    printf("\n -----------------Program ends------------------- \n");
    getch();
}