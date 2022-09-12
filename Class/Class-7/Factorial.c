#include<stdio.h>


int main()
{
    int num;
    long fact;
    printf("Enter a number to find factorial : \n");
    scanf("%d", &num);
    if(num<0)
        printf("Factorial of negative no. is not defined. \n");
    else
    {
        fact= factorial(num);
        printf()
    }
}
//function definition
long factorial (int num){
    if num(==0)
        return 0;
    else
        return num * factorial(num-1);
}
