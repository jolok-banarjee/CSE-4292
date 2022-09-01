/* 3. Write a program to take input of name, rollno and marks obtained by a student in 4 subjects
of 100 marks each and display the name, roll no with percentage score secured.
Author: Jolok Banarjee, Id:21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
#include<conio.h>
int main()
{
    int roll;
    char name[20];
    float physics,chemistry, math, biology, add, percentage;

    printf("Enter Roll number:");
    scanf("%d",&roll);
    printf("\nEnter name:");
    scanf("%s",name);

    printf("Enter Marks of Physics out of 100 : - ");
    scanf("%f",&physics);
    printf("Enter Marks of Chemistry out of 100 : - ");
    scanf("%f",&chemistry);
    printf("Enter Marks of Math out of 100 : - ");
    scanf("%f",&math);
    printf("Enter Marks of Biology out of 100 : - ");
    scanf("%f",&biology);

    add = physics+chemistry+math+biology;
    percentage=(float)(add/400)*100;

    printf("\n*************STUDENT DETAILS*************\n");
    printf("Roll number:%d",roll);
    printf("\nName :%s",name);
    printf("\nPercentage :%f",percentage);
    return 0;
}
