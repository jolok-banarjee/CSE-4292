#include<stdio.h>

int main()
{

    // int n[3]={1,2,3};
    //printf("%d",n[3]);  //garbage value will be print

    //int rr[5][20];
    //printf("%d",sizeof(rr));

    char str[10]= "Sun";//{'s','u','n'};
    for(int i=0; i<10; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
