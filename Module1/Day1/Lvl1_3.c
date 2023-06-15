#include<stdio.h>

int main(){
    int Rno,physics,maths,chemistry,total=300, perc;
    char Name[100];

    printf("Enter Details\n");
    printf("Enter Roll No:- \n");
    scanf("%d", &Rno);
    printf("Enter the Name:- ");
    scanf(" %[^\n]", Name);
    printf("Enter the Marks of Physics :- ");
    scanf("%d", &physics);
    printf("Enter the Marks of Maths :- ");
    scanf("%d", &maths);
    printf("Enter the Marks of Chemistry :- ");
    scanf("%d", &chemistry);

    int ObtMark = physics + maths + chemistry;

    perc = (ObtMark*100/total);

    printf("-------------SUMMARY------------\n");
    printf("Roll No :- %d\n", Rno);
    printf("Name :- %s\n", Name);
    printf("Total Marks :- %d\n", ObtMark);
    printf("Percentage :- %d\n", perc);


    return 0;
}

