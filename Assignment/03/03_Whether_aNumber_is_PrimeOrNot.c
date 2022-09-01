/*  3.Write a program in C Program to Check Whether a Number is Prime or Not.
    Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */

#include<stdio.h>

int main()
{
    int num,i,m=0,flag=0;
    printf("Enter the number to check prime:");
    scanf("%d",&num);
    m=num/2;
    for(i=2; i<=m; i++)
    {
        if(num%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The Number %d is prime",num);
    }
    return 0;
}
