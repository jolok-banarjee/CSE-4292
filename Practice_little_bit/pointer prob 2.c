#include<stdio.h>
int main()
{
    int var[]= {10,100,1000};
    int i, *ptr;
    ptr=&var;
    for(i=0; i<=2; i++)
    {

        printf("Address of var[%d] = %d \n",i,ptr);
        printf("Value of var[%d] = %d \n",i,*ptr);
        ptr++;
    }
    return 0;
}

