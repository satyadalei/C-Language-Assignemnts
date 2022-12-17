/*This program takes marks of Math, Physics & Chemistry and checks minimum marks required to be admitted and then shows admitted or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
  float mathMarks, physicsMarks, chemistryMarks, totalMarks;
  printf("\n This program takes marks of Math, Physics & Chemistry and checks minimum marks required to be admitted and then shows admitted or not \n\n\n\n");
  /* Taking all marks from user*/
  printf("\n Enter the Mathematics Marks :");
  scanf("%f",&mathMarks);
  printf("\n Enter the Physics Marks :");
  scanf("%f",&physicsMarks);
  printf("\n Enter the Chemistry Marks :");
  scanf("%f",&chemistryMarks);

  /* total marks of user*/
  totalMarks = mathMarks + physicsMarks + chemistryMarks;

  if( mathMarks >= 60 && physicsMarks>= 50 && chemistryMarks >= 40 || totalMarks >= 200){
        /*Admitted*/
    printf("\n Congratulations You are Addmitted");
  }else{
      /*Not Admitted*/
     printf("\n You are Not Addmitted ");
  }

  printf("\n Program Ends");
}
