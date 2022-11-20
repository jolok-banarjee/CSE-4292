#include<stdio.h>
int main()
{
    int var[3]= {10,100,1000};
    int i, *ptr[3];

    for(i=2; i>=0; i--)
    {
        ptr[i]=&var[i];
        printf("Address of var[%d] = %d \n",i,ptr[i]);
        printf("Value of var[%d] = %d \n",i,*ptr[i]);
        --ptr[i];
    }
    return 0;
}
