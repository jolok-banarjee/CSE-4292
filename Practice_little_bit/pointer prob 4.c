#include <stdio.h>
int f(char *p);
int main()
{
    char str[] = "ANSI";
    printf("\n%d", f(&str));
    return 0;
}
int f(char *p)
{
    char *q = p;
    while (*++p)
    {
        printf(" %u\n",  p);
        printf(" %c\n", *p);
    }
    return (p - q);
}