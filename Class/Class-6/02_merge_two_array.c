#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter The First String :");
    gets(s1);
    printf("Enter The Second String :");
    gets(s2);
    strcat(s1, s2);
    printf("String After Merged : %s", s1);
    return 0;
}