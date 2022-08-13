#include<stdio.h>
int main()
{
    char operator;
    double _1st, _2nd;
    printf("Enter an operator (+, -, *, /) :");
    scanf("%c", &operator);
    printf("Enter the 1st Number & 2nd Number:");
    scanf("%lf %lf",&_1st,&_2nd);
    switch (operator){
        case '+':
        printf("%lf + %lf = %lf",_1st,_2nd,_1st+_2nd);
        break;
        case '-':
        printf("%lf - %lf = %lf",_1st,_2nd,_1st-_2nd);
        break;
        case '*':
        printf("%lf * %lf = %f",_1st,_2nd,_1st*_2nd);
        break;
        case '/':
        printf("%lf / %lf =%lf",_1st,_2nd,_1st/_2nd);
        break;
        default:
        printf("Error! Operator is not Identified"); 
    }
return 0;
}