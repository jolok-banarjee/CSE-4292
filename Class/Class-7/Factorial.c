#include<stdio.h>
long int factorial (int num);

int main()
{
    int num;
    long int fact;
    printf("Enter a number to find factorial : \n");
    scanf("%d", &num);
    if(num<0)
        printf("Factorial of negative no. is not defined. \n");
    else
    {
        fact= factorial(num);
        printf("Factorial of %d is %ld",num, fact);
    }
    return 0;
}
//function definition
long int factorial (int num){
    if (num==0)
        return 1;
    else
        return num * factorial(num-1);
}
