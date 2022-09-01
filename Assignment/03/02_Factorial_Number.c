/*  2.Write a C program to calculate the factorial of a given number using for loop.
    Sample input:
    5
    Sample Output:
    120

    Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */

#include<stdio.h>

int main()
{
    int i,factorial=1,number;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=1; i<=number; i++)
    {
        factorial=factorial*i;
    }

    printf("Factorial of %d is: %d",number,factorial);
    return 0;
}
