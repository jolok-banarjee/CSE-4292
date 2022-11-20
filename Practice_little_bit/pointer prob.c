#include <stdio.h>

int main()
{
    int m[2];
    *(m+1)=100;
    *m=*(m+1);
    printf("%d",m[0]);
    return 0;
}

//m[0]=m[1]=100;
//m[10]=m[2]=100;
//but m[2]=m[3]=100; garbage value will be showed
