/* This program takes a character and detects whether a vowel or consonant */
#include<stdio.h>
#include<stdio.h>
void main()
{
    char ch;
    int ch1;
    printf("\n This program takes a character and detects whether a vowel or consonant \n");
    printf("============================================================");
    printf("\n Enter any character \n");
    scanf("%c",&ch); 
    ch1 = ch ;
    (ch1==97||ch1==101||ch1==105||ch1==111||ch1==117||ch1==65||ch1==69||ch1==73||ch1==79||ch1==85)
    ?
    printf("\n The entered character %c is a vowel \n", ch)
    :
    printf("\n The entered character %c is a consonant \n", ch) ;
    getch();
}
