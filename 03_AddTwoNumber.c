
#include<stdio.h>

int main()

{
    //int a,b,sum;
    int a, b, addition, subtract, multiplies;
    float division;

    printf("Enter a Number : \n");
    scanf("%d", &a);

    printf("Enter a Number : \n");
    scanf("%d", &b);

    addition=a+b;
    subtract=a-b;
    multiplies=a*b;
    division=a/b;


    printf("The addition of Two Number (%d + %d)  is %d\n",a, b, addition);
    printf("The Subs. of Two Number %d + %d) is %d\n",a, b, subtract);
    printf("The mult. of Two Number (%d + %d) is %d\n",a, b, multiplies);
    printf("The div. of Two Number (%d + %d) is %0.2f\n",a, b, division);

    return 0;
}
