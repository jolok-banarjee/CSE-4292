/* 2. C Program to Swap Two Numbers */
//Author: Jolok Banarjee, Id:21014026, AE-02, Aerospace, BSMRAAU
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter The value 'a':3");
    scanf("%d", &a);
    printf("Enter The value 'b':\n");
    scanf("%d", &b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    temp=a;
    a=b;
    b=temp;
    printf("The swap value of 'a' is %d\n",a);
    printf("The swap value of 'b' is %d\n", b);
    return 0;
}