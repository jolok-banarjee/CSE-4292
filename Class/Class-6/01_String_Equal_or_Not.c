#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int n;
    printf("Enter The First string :");
    gets(s1);
    printf("Enter The Second string :");
    gets(s2);
    n = strcmp(s1, s2);
    if (n == 0)
    {
        printf("Two Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
    return 0;
}