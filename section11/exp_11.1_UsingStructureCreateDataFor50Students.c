/* This program creates a data of 50 students using structure */
#include <stdio.h>
#include <conio.h>

#define NOOFSTUDENT 3
#define SUBJECT 3
#define MAXCHARACTER 50
struct studentInfo
{
    int RollNumber;
    char Name[MAXCHARACTER];
    float sub1Mark;
    float sub2Mark;
    float sub3Mark;
};

void main()
{
    int i;
    struct studentInfo std[NOOFSTUDENT];
    // std[0] = {1,"Nambineeta",25,23,40}; This is not working I don't kno why
    printf("\n Enter student credentials in order : \n");
    for (i = 0; i < NOOFSTUDENT; i++)
    {

        printf("\nEnter student %d details \n", i + 1);
        printf("Enter Roll number :");
        scanf("%d", &std[i].RollNumber);

        printf("\n Enter Name :");
        /*gets(std[i].Name);*/
        scanf("%s", &std[i].Name);

        printf("\n Enter Subject 1 mark :");
        scanf("%f", &std[i].sub1Mark);

        printf("\n Enter Subject 2 mark :");
        scanf("%f.2", &std[i].sub2Mark);

        printf("\n Enter Subject 3 mark :");
        scanf("%f", &std[i].sub3Mark);
    }
    printf("\nSerial\tRoll Number\tName\t\tSubject 1\tSubject 2\tSubject 3");
    printf("\n------\t-----------\t----\t\t---------\t----------\t---------\n");
    for (i = 0; i < NOOFSTUDENT; i++)
    {
    //    printf("%d\t",i+1);
    //    printf("%d\t\t",std[i].RollNumber);
    //    printf("%s",std[i].Name);
    //    printf("\t\t%.2f",std[i].sub1Mark);
    //    printf("\t%.2f",std[i].sub2Mark);
    //    printf("\t%.2f",std[i].sub3Mark);
       /*-------OR----------------*/
       printf("Student %d Details :\n",i+1);
       printf("Roll Number :%d\n",std[i].RollNumber);
       printf("Name :%s\n",std[i].Name);
       printf("Subject1 Mark :%.2f\n",std[i].sub1Mark);
       printf("Subject2 Mark :%.2f\n",std[i].sub2Mark);
       printf("Subject3 Mark :%.2f\n",std[i].sub3Mark);
       printf("----------*----------\n");
    }

    printf("\n-----------------Program Ends----------------\n");
    getch();
}