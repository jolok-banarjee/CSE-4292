/* 2. C Program to Swap Two Numbers */
//Author: Jolok Banarjee, Id:21014026, AE-02, Aerospace, BSMRAAU
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter The value 'a': ");
    scanf("%d", &a);
    printf("Enter The value 'b': ");
    scanf("%d", &b);
    printf("\nThe value of a is %d", a);
    printf("\nThe value of b is %d", b);
    temp=a;
    a=b;
    b=temp;
    printf("\nThe swap value of 'a' is %d",a);
    printf("\nThe swap value of 'b' is %d", b);
    return 0;
}
