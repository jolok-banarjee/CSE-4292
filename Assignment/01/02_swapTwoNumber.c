/* 2. C Program to Swap Two Numbers 
Author: Jolok Banarjee, Id:21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
int main()
{
    int a, b, temp;
    a=5;
    b=6;
    printf("The value of 'a' is %d\n", a);
    printf("The value of 'b' is %d\n", b);
    temp=a;
    a=b;
    b=temp;
    printf("The swap value of a is %d\n",a);
    printf("The swap value of b is %d\n", b);
    return 0;
}