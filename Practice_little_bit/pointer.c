#include<stdio.h>
main()
{
    int m=3, n=100,
        *p;
    p=&m;
    printf("m is %d\n",*p);
    m++;
    printf("now m is %d\n",*p);
    p=&n;
    printf("n is %d\n",*p);
    *p=500; /* *p is at the left of "=" */
    printf("now n is %d\n", n);
}
