/*This program is a menu based program that takes two arrays and performs different tasks 
based on user menu selection*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,userMenuNumber,insertedNumber,insertPosition;
  int initialNumber,nextNumber,deleteNumber,deleteNumberPosition;
  int status = -1;
  int largest,smallest,count=0,smallestNumPosition;
  int lengthOfArrayA,lengthOfArrayB,totalElements;
  printf("\n This program is a menu based program that takes two arrays A & B and performs different tasks based on user menu selection \n");
  printf("\n Enter the number of elements you want to put in an Array \n");
  scanf("%i",&n);
  int A[n+1];
  int B[n+1];
  int shortedArrayA[n]; /* Will be require while shorting elements in array A */
  int shortedArrayB[n]; /* Will be require while shorting elements in array B */
  printf("\n Please enter %i numbers in A arrays \n",n);
  for ( i = 0; i < n; i++)
  {
    scanf("%i",&A[i]);
  }
  printf("\n Please enter %i numbers in B arrays \n",n);
  for ( i = 0; i < n; i++)
  {
    scanf("%i",&B[i]);
  }
  printf("\n What task you want to be performed? Choose a corresponding number. \n");
  printf("\n 1. Traverse A. \n");
  printf("\n 2. Traverse B. \n");
  printf("\n 3. Insert new element in A. \n");
  printf("\n 4. Insert new element in B. \n");
  printf("\n 5. Delete an element in A. \n");
  printf("\n 6. Delete an element in B. \n");
  printf("\n 7. Search an element in A. \n");
  printf("\n 8. Search an element in B. \n");
  printf("\n 9. Sort A (in ascending order). \n");
  printf("\n10. Sort B (in ascending order). \n");
  printf("\n11. Merge A and B to form new array C. \n");

  scanf("%i",&userMenuNumber);
  if (userMenuNumber > 11 || userMenuNumber < 1) /*Checking validity of user menu number*/
  {
    printf("\n You did not choosed a valid numbered task \n");
  }else
  {
    switch(userMenuNumber)
    {
        case 1:
            for ( i = 0; i < n; i++)
            {
            printf("%i",A[i]);
            }
            break;
        case 2:
            for ( i = 0; i < n; i++)
            {
              printf("%i",B[i]);
            }
            break;
        case 3:
            printf("\n Enter the number you want to insert \n");
            scanf("%i",&insertedNumber);
            printf("\n Enter the position where you want to insert \n");
            scanf("%i",&insertPosition);
            /* Insertion of number */
            initialNumber = A[insertPosition] ;
            A[insertPosition] = insertedNumber ;
            for ( i = insertPosition +1; i < n+1; i++)
            {
                nextNumber = A[i];
                A[i] = initialNumber;
                initialNumber = nextNumber;
            }
            /*Printing new Array*/ 
            printf("\n The new Array is: \n");
            for (i = 0; i < n+1; i++)
            {
                printf(" %i ",A[i]);
            }
            break;
        case 4:
            printf("\n Enter the number you want to insert \n");
            scanf("%i",&insertedNumber);
            printf("\n Enter the position where you want to insert \n");
            scanf("%i",&insertPosition);
            /* Insertion of number */
            initialNumber = B[insertPosition] ;
            B[insertPosition] = insertedNumber ;
            for ( i = insertPosition +1; i < n+1; i++)
            {
                nextNumber = B[i];
                B[i] = initialNumber;
                initialNumber = nextNumber;
            }
            /*Printing new Array*/ 
            printf("\n The new Array is: \n");
            for (i = 0; i < n+1; i++)
            {
                printf(" %i ",B[i]);
            }
            break;    
        case 5 : /* Delete an element from A */
            for (i = 0; i < n; i++)
                {
                    printf(" %i ",A[i]);
                }
            printf("\n Enter which element from above array you want to delete.\n");
            scanf("%i",&deleteNumber);
            /* Here we are deleting only one element */
            for (i = 0; i < n ; i++)
            {
              if (A[i] == deleteNumber)
              {
                deleteNumberPosition = i ;
                status = 1 ;
                break;
              }
            }
            if (status == 1) /* That means user has given any one number from Array */
            {
                /*Creating a new array after deletion */
                for (i = deleteNumberPosition ; i < n-1 ; i++)
                {
                  initialNumber = A[i+1];
                  A[i] = initialNumber ;
                }
                /*Printing new Array after deletion an element*/
                printf("\n The new array after deletion is \n");
                for ( i = 0; i < n-1 ; i++)
                {
                  printf(" %i ",A[i]);
                }
            }
            else /* That means user has not given any one number from Array */
            {
                 printf("\n You did not entered any number from array \n");
            }
            break;
        case 6 : /*Delete an element from Array B*/    
         for (i = 0; i < n; i++)
                {
                    printf(" %i ",B[i]);
                }
            printf("\n Enter which element from above array you want to delete.\n");
            scanf("%i",&deleteNumber);
            /* Here we are deleting only one element */
            for (i = 0; i < n ; i++)
            {
              if (B[i] == deleteNumber)
              {
                deleteNumberPosition = i ;
                status = 1 ;
                break;
              }
            }
            if (status == 1) /* That means user has given any one number from Array */
            {
                /*Creating a new array after deletion */
                for (i = deleteNumberPosition ; i < n-1 ; i++)
                {
                  initialNumber = B[i+1];
                  B[i] = initialNumber ;
                }
                /*Printing new Array after deletion an element*/
                printf("\n The new array after deletion is \n");
                for ( i = 0; i < n-1 ; i++)
                {
                  printf(" %i ",B[i]);
                }
            }
            else /* That means user has not given any one number from Array */
            {
                 printf("\n You did not entered any number from array \n");
            }
            break;
        case 7 : /* Search an element from Array A */     
              printf("\n What element do you want to search in Array A \n");
              scanf("%i",&initialNumber);
              for (i = 0; i < n+1 ; i++)
              {
                if (A[i] == initialNumber )
                {
                  printf("\n The number found and its index is %i \n", i);
                  break;
                }else if(i == n)
                {
                  printf("\n The entered number NOT found  \n");
                }
              }
              
              break;
        case 8 : /* Search an element from Array B */     
              printf("\n What element do you want to search in Array B \n");
                  scanf("%i",&initialNumber);
                  for (i = 0; i < n+1 ; i++)
                  {
                    if (B[i] == initialNumber )
                    {
                      printf("\n The number found and its index is %i \n", i);
                      break;
                    }else if(i == n)
                    {
                      printf("\n The entered number NOT found  \n");
                    }
                  }
        case 9 : /* Sort A (In ascending order)*/ 
               printf("\n The array A in ascending order \n");
               largest = A[0];
               for (i = 0; i < n+1; i++)
               {
                 if (largest <= A[i])
                 {
                   largest = A[i];
                 }
               }
               for(i = 0; i < n; i++)
               {
                  smallest = A[i];
                  for(j = 0; j < n; j++)
                  {
                    if(smallest >= A[j])
                    {
                      smallest = A[j];
                      smallestNumPosition = j;
                    }
                  }
                  shortedArrayA[count] = smallest;
                  count++;
                  A[smallestNumPosition] = largest ;
                  printf(" %i ",smallest);
               }
               break;
         case 10 :  /* Sort B (In ascending order)     */
               printf("\n The array B in ascending order \n");
               largest = B[0];
               for (i = 0; i < n+1; i++)
               {
                 if (largest <= B[i])
                 {
                   largest = B[i];
                 }
               }
               for(i = 0; i < n; i++)
               {
                  smallest = B[i];
                  for(j = 0; j < n; j++)
                  {
                    if(smallest >= B[j])
                    {
                      smallest = B[j];
                      smallestNumPosition = j;
                    }
                  }
                  shortedArrayA[count] = smallest;
                  count++;
                  B[smallestNumPosition] = largest ;
                  printf(" %i ",smallest);
               }
            case 11: /* Merging array A and array B in a new array*/
                  lengthOfArrayA = (sizeof(A)/sizeof(A[0])) - 1; /*Because actual array elements are one less*/
                  lengthOfArrayB = (sizeof(B)/sizeof(B[0])) - 1;
                  totalElements = lengthOfArrayA + lengthOfArrayB ;
                  int mergedNewArray[totalElements];
                  for (i = 0; i < lengthOfArrayA; i++)
                  {
                    mergedNewArray[i] = A[i] ;
                  }
                  for ( i = lengthOfArrayA , j = 0 ; j < lengthOfArrayB ; i++,j++)
                  {
                    mergedNewArray[i] = B[j] ;
                  }
                  
                  printf("\n The merged array is : \n");
                  for (i = 0; i < totalElements; i++)
                  {
                    printf(" %i ",mergedNewArray[i]);
                  }
                  
                  
    } /*switch statement ends here */
  }/*Else statement ends here*/
  
  
  

}