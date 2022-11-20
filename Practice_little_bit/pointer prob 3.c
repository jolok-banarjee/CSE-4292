#include<stdio.h>
int f(char *p);
int main()
{
    char str[]= "ANSI";
    printf("\n%d", f(str));
    return 0;
}
int f(char *p)
{
    char *q=p;
    while(*++p){printf("%u %u\n",q, p);
    printf("%c %c\n",*q, *p);
    }
    return (p-q);
}
