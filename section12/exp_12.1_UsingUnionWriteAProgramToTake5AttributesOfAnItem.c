/*This program takes 5 attributes of an item using union*/
#include <stdio.h>
#include <conio.h>
#define LENGTH 20
#define NAME_LENGTH 30
#define NO_OF_ITEM 2
union modelIdentity
{
    char modelNumber[LENGTH];
    char itemCode[LENGTH];
};
struct itemDetails
{
    union modelIdentity modelSpecificationType;
    char name[NAME_LENGTH];
    float price;
};

void main()
{
    char choice;
    int i;
    union modelIdentity modelIdType;
    struct itemDetails item[NO_OF_ITEM];
    printf("\n This program takes 5 attributes of an item using union \n");
    printf("\n Enter the model identity type you prefer (1 for model number or anything else for item code) \n");
    scanf("%c", &choice);
    for (i = 0; i < NO_OF_ITEM; i++)
    {
        printf("\n Enter item %d details ::",i+1);
        if (choice == '1')
        {
            printf("\nEnter model number :");
            scanf("%s", &item[i].modelSpecificationType.modelNumber);
        }
        else
        {
            printf("\n Enter Item code :");
            scanf("%s", &item[i].modelSpecificationType.itemCode);
        }
        printf("\n Enter Name of item :");
        scanf("%s", &item[i].name);
        printf("\n Enter price of item :");
        scanf("%f", &item[i].price);
    }
    
    for (i = 0; i < NO_OF_ITEM; i++)
    {
       printf("\n\n ------Item %d -------",i+1);
       printf("\n Product Id\t : %s",item[i].modelSpecificationType.itemCode);
       printf("\n Product Name\t : %s",item[i].name);
       printf("\n Product Price\t : %f",item[i].price);
    }
    

    printf("\n -----------Program Ends-------------- \n");
    getch();
}