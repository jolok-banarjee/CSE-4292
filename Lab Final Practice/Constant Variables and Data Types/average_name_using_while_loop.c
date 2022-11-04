#include<stdio.h>
#define N 10
int main()
{
    int count;
    float sum, average, number;
    sum=0;
    count=0;
    printf("Enter %d Number: ",N);
    while(count<N)
    {  
        scanf("%f",&number);
        sum=sum+number;
        count=count+1;
    }
    average=sum/N;
    printf("N=%d sum=%f count=%d",N,sum,count);
    printf("\nAverage=%f",average);
    return 0;
}